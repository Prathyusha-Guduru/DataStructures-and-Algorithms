// Finding the maximum and minimum element in BST.

#include <iostream>
using namespace std;

typedef struct node{
	int data;
	node *left;
	node *right;
}node;



node *getNewNode(int data){
	node* newNode = new node();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

node* insert(node *root, int data){
	node* newNode = getNewNode(data);
	if(root == NULL){
		root = newNode;
	}
	else if(data <= root->data){
		root->left = insert(root->left,data);
	}
	else{
		root->right = insert(root->right,data);
	}
	return root;
}

int findMax(node *root)
{
    if (root == NULL)
        return INT_MIN;
    int res = root->data;
    int lres = findMax(root->left);
    int rres = findMax(root->right);
    if (lres > res)
        res = lres;
    if (rres > res)
        res = rres;
    return res;
}




int findMin(node* root)
{
	if (root == NULL)
	return INT_MAX;
	int res = root->data;
	int lres = findMin(root->left);
	int rres = findMin(root->right);
	if (lres < res)
	res = lres;
	if (rres < res)
	res = rres;
	return res;
}



int main(){
	// Creating an empty BST
	node* root = NULL;
	cout<<"Question 7"<<endl;
	root = insert(root,11);
	root = insert(root,4);
	root = insert(root,36);
	root = insert(root,346);
	printf("Minimum element in tree is %d\n",findMin(root));
	printf("Maximum element in tree is %d",findMax(root));
	return 0;
}