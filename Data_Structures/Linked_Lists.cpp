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

// To insert a node at nth postion
void insertAtNthPosition(node **headptr,int number, int position){
	node *newNode = new node();
	newNode->data = number;
	newNode->next = NULL;
	node *prevNode = *headptr;
	for(int i=0;i<position-1;i++){
		prevNode = prevNode->next;
	}
	if(prevNode == NULL){
		return;
	}
	else{
		newNode->next = prevNode->next;
		prevNode->next = newNode;
		return;
	}
}

// To delete a node from nth position
void deleteAtNthPosition(node **headptr,int position){
	node * prevNode = *headptr;
	for(int i=0;i<position-1;i++){
		prevNode = prevNode->next;
	}
	if(prevNode == *headptr){
		*headptr = prevNode->next;
		free(prevNode);
		return;
	}
	else{
		node *toBeDeleted = prevNode->next;
		prevNode->next = toBeDeleted->next;
		free(toBeDeleted);
		return;
	}


}

//Reverse a linked list iteratively
void reverseTheListIteratively(node **headptr){
	node * prevNode,*nextNode,*currentNode;
	currentNode = *headptr;
	prevNode = NULL;
	while(currentNode != NULL){
		nextNode = currentNode->next;
		currentNode ->next = prevNode;
		prevNode = currentNode;
		currentNode = nextNode;
	}
	*headptr = prevNode;

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
	insertAtNthPosition(&head,101,3);
	// Expected output : 0 1 2 101 3 4
	displayLinkedList(head);
	deleteAtNthPosition(&head,3);
	// Expected output : 0 1 2 3 4
	displayLinkedList(head);
	reverseTheListIteratively(&head);
	// Expected output : 4 3 2 1 0
	cout<<"Reverse order : ";
	displayLinkedList(head);
    return 0;

}