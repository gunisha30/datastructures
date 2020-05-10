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


void Inorder(BstNode *root) {
	if(root == NULL) 
	return;

	Inorder(root->left);       
	cout<<root->data;  
	Inorder(root->right);      
}

void search(BstNode *root,int data) {
	if(root == NULL) 
	{
	cout<<"not found";
	return;
	}
    else if(data < root->data)
	{
	   search(root->left,data);   
	}
	else if (data > root->data)
	{
	   search(root->right,data);   
	}
	else
	{
	    cout<<"found";
	}
}

int main() {
	BstNode* root = NULL;  
	
	root = Insert(root,15);	
	root = Insert(root,10);
	root = Insert(root,20);
	root = Insert(root,9);
	cout<<root->left->left->data;
	cout<<"Inorder: ";
	Inorder(root);
	return 0;
}