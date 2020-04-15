#include <iostream>
using namespace std;
#define null 0 
struct node
{
    int data;
node *left, *right;
}*root;

void createbst()
{
    root=null;
    root->left=null;
    root->right=null;
}

void insert(int a)
{
  if(root==null)
  {
      node *new_node=new node();
  new_node->data=a;
  root=new_node;
      
  }
  else
  {
      if(a)
  }
}

int main() {
	createbst();
	insert(10);
	return 0;
}
