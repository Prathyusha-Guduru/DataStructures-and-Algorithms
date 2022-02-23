#include <iostream>
struct node {
	int data;
	struct node* left;
	struct node* right;
};
struct node* newNode(int data)
{
	struct node* newNode
		= (struct node*)(malloc(sizeof(struct node)));
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}
struct node* insert(struct node* root, int data)
{
	if (root == NULL)
		return newNode(data);
	else {
		if (data < root->data)
			root->left = insert(root->left, data);
		if (data > root->data)
			root->right = insert(root->right, data);
		return root;
	}
}
void inOrder(struct node* root)
{
	if (root == NULL)
		return;
	else {
		inOrder(root->left);
		printf("%d ", root->data);
		inOrder(root->right);
	}
}
int main()
{
	int arr[] = { 1, 2, 3, 2, 5, 4, 4 };
	int n = sizeof(arr) / sizeof(arr[0]);
	struct node* root = NULL;
	for (int i = 0; i < n; i++) {
		root = insert(root, arr[i]);
	}
	inOrder(root);
	return 0;
}
