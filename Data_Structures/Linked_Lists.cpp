#include <iostream>

using namespace std;

struct node {
	int data;
	node * next;
};

//To display the linked list
void displayLinkedList(node * head){
	cout<<"Elements of the list are : "<<endl;
	while(head != NULL){
		cout<<head->data<<endl;
		head = head->next;
	}
}	

// To insert the node at the end of a linked list
void insertAtEnd(node **headptr,int number){
	node * newNode = new node();
	newNode->data = number;
	newNode->next = NULL;
	node *last = *headptr;
	if (*headptr == NULL){
		*headptr = newNode;
		return;
	}
	else{
		while(last->next != NULL){
			last = last->next;
		}
		last->next = newNode;
		return;
	}

}

int main()
{
	node * head;
	head = new node();
	node * second = new node();
	node * third = new node();
	head->data = 1;
	head->next = second;
	second->data = 2;
	second->next = third;
	third->data = 3;
	third->next = NULL;
	displayLinkedList(head);
	insertAtEnd(&head,4);
	displayLinkedList(head);
    return 0;

}