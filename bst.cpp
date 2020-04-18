#include <iostream>
using namespace std;
#define NULL 0 
struct bst
{
int data;
node *left, *right;
};
bst *root;

void createbst()
{
    root=NULL;
}

bst* insert(int a, bst *ptr)
{
  if(ptr==null)
  {
  bst *new_node=new bst();
  new_node->data=a;
  new_node->left=NULL;
  new_node->right=NULL;
  ptr=new_node;
  }
  else
  {
      if(a>ptr->data)
      insert(a, ptr->right);
      else
      insert(a, ptr->left);
  }
return ptr;
}

int main() {
	createbst();
	root=insert(5, root);
	root=insert(4, root);
	root=insert(10,root);
        root=insert(3, root);
	root=insert(2, root);
	root=insert(11, root);
	return 0;
}
