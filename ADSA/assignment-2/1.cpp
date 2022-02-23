// Write a program for Insertion sort and display all the elements in each iteration, and
// also compute the complexity analysis.

#include <iostream>
using namespace std;

void printArr(int *arr, int n){
	for(int x=0;x<n;x++){
		printf("%d\t",arr[x]);
	}
	printf("\n");
}

void insertionSort(int *arr,int n){
	int value,hole;
	for(int x=0;x<n;x++){
		value = arr[x];
		hole = x;
		while(hole>0 && arr[hole-1] > value){
			arr[hole] = arr[hole-1];
			hole--;
		}
		printf("x : %d hole : %d value : %d\n", x,hole,value);
		printArr(arr,n);
		arr[hole] = value;
		
	}
}

int main(){
	int arr[5] = {5,3,2,5,1};
	insertionSort(arr,5);
	return 0;
}