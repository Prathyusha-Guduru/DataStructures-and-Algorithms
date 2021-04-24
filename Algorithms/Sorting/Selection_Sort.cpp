

#include <iostream>

using namespace std;

void swap(int *p1,int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void selectionSort(int arr[],int size){
    int indexMin;
    for(int i=0;i<size-1;i++){
        indexMin = i;
        for(int j = i+1;j<size;j++){
            if(arr[j]<arr[indexMin]){
                indexMin = j;
            }
        }
        swap(&arr[i],&arr[indexMin]);
    }
}

int main()
{
    int arr[] = {24,54,23,97,23};
    selectionSort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
