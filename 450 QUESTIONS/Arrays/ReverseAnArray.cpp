#include <iostream>

using namespace std;

// void reverse(int arr[],int n){

// }

void printArray(int arr[],int n){
	cout<<"The elements of the array are : "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int * getArray(int n){
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"Enter element at "<<i<<" index  : ";
		cin>>arr[i];
	}
	return arr;
}

int main(){
	int *arr = getArray(5);
	printArray(arr,5);
}