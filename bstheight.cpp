#include<iostream>
using namespace std;

struct BstNode {
	int data; 
	BstNode* left;
	BstNode* right;
};

BstNode* GetNewNode(int data) {
	BstNode* newNode = new BstNode();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

BstNode* Insert(BstNode* root,int data) {
	if(root == NULL) { 
		root = GetNewNode(data);
	}
	
	else if(data <= root->data) {
		root->left = Insert(root->left,data);
	}
	 
	else {
		root->right = Insert(root->right,data);
	}
	return root;
}

int getheight(BstNode* root, int key)
{
int height=0;
if(root==NULL)
return -1;

if(root->data==key)
return 0;

getheight(root->left,height+1)
}

int main() {
	BstNode* root = NULL;  
	
	root = Insert(root,15);	
	root = Insert(root,10);
	root = Insert(root,20);
	root = Insert(root,9);
	h=getheight(root,9);
	cout<<h;
	return 0;
}

