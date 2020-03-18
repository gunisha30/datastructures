#include <iostream>
using namespace std;
struct tree
{
struct tree *right, *left;
int data;
};
int x;
struct tree* create()
{
    cin>>x;
    if(x==-1)
    {
        return 0;
    }
    struct tree* node = (struct tree*)malloc(sizeof(struct tree));
    node->data=x;
    cout<<"enter left data";
    node->left=create();
    cout<<"enter right data";
    node->right=create();
    return node;
}
int main()
{
    struct tree* p;
    cout<<"enter data";
    p=create();
    return 0;
}
