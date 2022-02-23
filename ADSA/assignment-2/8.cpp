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

node* kthSmallest(node* root, int& k)
{
    if (root == NULL)
        return NULL;
    node* left = kthSmallest(root->left, k);
    if (left != NULL)
        return left;
    k--;
    if (k == 0)
        return root;
    return kthSmallest(root->right, k);
}
void printKthSmallest(node* root, int k)
{
    int count = 0;
    node* res = kthSmallest(root, k);
    if (res == NULL)
        cout << "There are less than k nodes in the BST";
    else
        cout << k<<" th Smallest Element is " << res->data<<endl;
}


void kthLargestUtil(node *root, int k, int &c)
{
    if (root == NULL || c >= k)
        return;
    kthLargestUtil(root->right, k, c);
    c++;
    if (c == k)
    {
        cout << k<<"th largest element is "
             << root->data << endl;
        return;
    }
    kthLargestUtil(root->left, k, c);
}
void kthLargest(node *root, int k)
{
    int c = 0;
    kthLargestUtil(root, k, c);
}


int main(){
	// Creating an empty BST
	node* root = NULL;
	cout<<"Question 7"<<endl;
	root = insert(root,11);
	root = insert(root,4);
	root = insert(root,36);
	root = insert(root,346);
	printKthSmallest(root,3);
	kthLargest(root,1);
	return 0;
}
