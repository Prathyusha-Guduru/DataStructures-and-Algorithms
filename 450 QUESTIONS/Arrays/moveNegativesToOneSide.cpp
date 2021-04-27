#include <iostream>

using namespace std;


void swap(int *p1,int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void moveNegatives(int *arr,int left,int right,int n){
    while(right-left != 1){
        cout<<"left is "<<left<<" right is "<<right<<endl;
        if(arr[left] >= 0 && arr[right] >=0) {
           right--;
        }
        if(arr[right] <0 && arr[left] < 0)
        {
            left++;
        }
        if(arr[left] < 0 && arr[right]>=0 ){
         left++;
         right--;
        }
        if(arr[left] >=0 && arr[right]<0){
          swap(&arr[left],&arr[right]);  
        } 
    }
}

int main(){
	int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
	int n = sizeof(arr)/sizeof(arr[0]);
	int left = 0;
	int right = n-1;
	moveNegatives(arr,left,right,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}

	return 0;

}