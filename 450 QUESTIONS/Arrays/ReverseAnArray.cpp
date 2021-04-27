#include <iostream>
#include <cmath>

using namespace std;

void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	cout<<endl;
}

void swap(int *p1,int *p2){
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}


//Reversing array WITHOUT using STACK 
// Reversing using SWAPPING
void reverseArray(int arr[],int n){
	int mid = floor((float)n/2);
	int i=0, j=n-1,swaps = 0;
	while(swaps != mid){
		swap(&arr[i],&arr[j]);
		i++;
		j--;
		swaps ++;
	}
}

int main(){
	int arr[6] = {1,2,3,4,5,6};
	cout<<"Elements of the array before reversal  : "<<endl;
	printArray(arr,6);
	cout<<"After reversal "<<endl;
	reverseArray(arr,6);
	printArray(arr,6);
	return 0;
}