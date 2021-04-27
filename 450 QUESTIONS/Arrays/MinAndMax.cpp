#include <iostream>

using namespace std;

//0(n**2) -----> Linear search with 2 loops
void minAndMax(int arr[],int n){
		int min = 0;
	int max = 0;
	for(int i=0;i<n-1;i++){
	    for(int j=i+1;j<n;j++){
	        if(arr[min]>arr[j]){
	            min = j;
	        }
	        if(arr[max]<arr[j]){
	            max = j;
	        }
	    }
	}
	cout<<"Minimum element is "<<arr[min]<<" Maximum element is "<<arr[max]<<endl;
}

//Searching in pairs --> O(n)
// void minAndMaxPairs(int arr[],int n){
// 	int min,max;
// 	min = max = 0;
// 	for(int i=0;i<n-1;i++){
// 		if(arr[i]<arr[i+1] && arr[i]<arr[min]){
// 			min = i;
// 		}
// 		if(arr[i]>arr[i+1] && arr[i]>arr[max]){
// 			max = i;
// 		}
// 	}
// 	cout<<"Minimum element is "<<arr[min]<<" Maximum element is "<<arr[max]<<endl;
// }

int main()
{
	int arr[] = {1,2,4,5,5,6};
	int n = sizeof(arr);
	minAndMax(arr,n);
	
	return 0;
}
