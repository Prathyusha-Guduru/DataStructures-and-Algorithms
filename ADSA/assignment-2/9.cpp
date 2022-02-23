#include<iostream>
using namespace std;
class BSTNode
{
	public:
	int data;
	BSTNode* left;
	BSTNode* right;
};
BSTNode* newNode(int data);
BSTNode* sortedArrayToBST(int arr[],
						int start, int end)
{
	if (start > end)
	return NULL;
	int mid = (start + end)/2;
	BSTNode *root = newNode(arr[mid]);
	root->left = sortedArrayToBST(arr, start,
									mid - 1);
	root->right = sortedArrayToBST(arr, mid + 1, end);
	return root;
}
BSTNode* newNode(int data)
{
	BSTNode* node = new BSTNode();
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return node;
}
void preOrder(BSTNode* node)
{
	if (node == NULL)
		return;
	cout << node->data << " ";
	preOrder(node->left);
	preOrder(node->right);
}
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	int n = sizeof(arr) / sizeof(arr[0]);
	BSTNode *root = sortedArrayToBST(arr, 0, n-1);
	cout << "PreOrder Traversal of constructed BST \n";
	preOrder(root);
	return 0;
}
