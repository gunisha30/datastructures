
#include <cstdlib> 
#include <iostream> 
#include <malloc.h> 
using namespace std; 

struct node { 
	node* parent; 
	node* child; 
	node* left; 
	node* right; 
	int key; 
}; 

struct node* mini[3]; 

int no_of_nodes = 0; 

void insertion(int val,int i) 
{ 
	struct node* new_node = (struct node*)malloc(sizeof(struct node)); 
	new_node->key = val; 
	new_node->parent = NULL; 
	new_node->child = NULL; 
	new_node->left = new_node; 
	new_node->right = new_node; 
	if (mini[i] != NULL) { 
		(mini[i]->left)->right = new_node; 
		new_node->right = mini[i]; 
		new_node->left = mini[i]->left; 
		mini[i]->left = new_node; 
		if (new_node->key < mini[i]->key) 
			mini[i] = new_node; 
	} 
	else { 
		mini[i] = new_node; 
	} 
} 

void display(struct node* mini, int m) 
{ 
	node* ptr = mini; 
	if (ptr == NULL) 
		cout << "The Heap is Empty" << endl; 

	else { 
		cout << "The root nodes of Heap are: " << endl; 
		do { 
			cout << ptr->key; 
			ptr = ptr->right; 
			if (ptr != mini) { 
				cout << "-->"; 
			} 
		} while (ptr != mini && ptr->right != NULL); 
		cout << endl 
			<< "The heap has " << m << " nodes" << endl; 
	} 
} 
void find_min(struct node* mini) 
{ 
	cout << "min of heap is: " << mini->key << endl; 
} 

void uni(int i, int j, int k)//struct node* min1, struct node* min2, struct node* min3)
{
 mini[k]=mini[i];//3=1
 (mini[j]->right)->left=mini[k]->left;//2=3
 (mini[k]->left)->right=mini[j]->right;//3=2
 mini[k]->left=mini[j];//3=2
 mini[j]->right=mini[k];//2=3
if((mini[j]->key)<(mini[k]->key))
{
    mini[k]=mini[j];
}
    
}

int main() 
{ 

//ptr array 
for(int i=0;i<3;i++)
mini[i]=NULL;
	int n1 = 4, n2=3;
	insertion(4,0); 
	insertion(3,0); 
	insertion(7,0); 
	insertion(5,0); 
	insertion(2,1); 
	insertion(1,1); 
	insertion(10,1); 
    display(mini[0],n1);
	display(mini[1],n2);
    find_min(mini[0]);
	find_min(mini[1]);
    uni(0,1,2);
    display(mini[2],n1+n2);
	find_min(mini[2]);

	return 0; 
} 

