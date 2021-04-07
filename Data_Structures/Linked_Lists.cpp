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

// To insert a node at the head of the list
void insertAtHead(node **headptr,int number){
	node * newNode = new node();
	newNode->data = number;
	newNode->next = *headptr;
	*headptr = newNode;
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
	//Expected output : 1 2 3
	displayLinkedList(head); 
	insertAtEnd(&head,4);
	// Expected output : 1 2 3 4
	displayLinkedList(head); 
	insertAtHead(&head,0);
	// Expected output : 0 1 2 3 4
	displayLinkedList(head);
    return 0;

}