Link to the problem: https://practice.geeksforgeeks.org/problems/mirror-tree/1 
Solu:

void mirror(Node* node) 
{
     if(node!=NULL)
     {
    Node* temp=NULL;
     temp=node->left;
     node->left=node->right;
     node->right=temp;
     mirror(node->left);
     mirror(node->right);
     }
}
