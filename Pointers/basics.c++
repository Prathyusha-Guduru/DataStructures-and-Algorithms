#include <iostream>

using namespace std;


int main(){
	int a = 4;
	int *p = &a;
	//Prints pointer adress
	cout<<p<<endl; 
	// prints 4 (value of a)  (DEREFENCING)
	cout<<*p<<endl; 
	// Prints adress of a
	cout<<&a<<endl;
	//Prints the next integer adress after p, i.e adress of 4bytes after P  (POINTER ARTHIMETIC)
	cout<<p+1<<endl;
	//Prints some garbage value
	cout<<*(p+1)<<endl;
	// ************ POINTER TO POINTERS ***********
	int ** q = &p;
	int *** r = &q;
	//Dereferencing for a using int ** to change the value of int 
	*(*q) = 12;
	cout<<a<<endl;
	//Dereferencing for a usiing int *** to change the value of int 
	*(*(*r)) = (*p)- 4;
	cout<<a;
	//Dereferencing using int ** to change the value of int *
	int b= 12;
	(*q) = &b;
	cout<<"&b "<<&b<<"p  "<<p<<"*q "<<*q<<endl;


}