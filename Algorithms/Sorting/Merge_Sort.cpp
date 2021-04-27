#include <iostream>

using namespace std;

void merge(int *arr,int*left,int nL,int *right,int nR){
	int i,j,k;
	i=0;j=0;k=0;

	while( i< nL && j < nR){
		if(left[i]<right[j]) arr[k++] = left[i++];
		else arr[k++] = right[j++];
	}
	while(i<nL) arr[k++] = left[i++];
	while(j < nR) arr[k++] = right[j++];
}


void mergeSort(int arr[],int n){
	if(n<2){
		return;
	}
	int mid,*left,*right;
	mid = n/2;
	left = (int*)malloc(mid*sizeof(int));
	right = (int *)malloc((n-mid)*sizeof(int));
	for(int i=0;i<mid;i++) left[i] = arr[i];
	for(int i=mid;i<n;i++) right[i-mid] = arr[i];
	mergeSort(left,mid);
	mergeSort(right,n-mid);
	merge(arr,left,mid,right,n-mid);
}


int main(){
	int arr[] = {34,25,24,14,6};
	int n = sizeof(arr)/sizeof(arr[0]);
	mergeSort(arr,n);
	for(int i=0;i<n;i++){
	
		cout<<arr[i]<<" ";
	}
}