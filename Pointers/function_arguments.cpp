#include <iostream>

using namespace std;

void addTwo(int *a){
	(*a) = (*a)+2;
}

int main(){
	int a = 10;
	addTwo(&a);
	cout<<a<<endl;
	int arr[5] = {1,2,3,4,5};
	//Arrays and pointers
	for(int i=0;i<5;i++){
		cout<<"Address : "<<&arr[i]<<" or "<<(arr+i)<<" Value = "<<*(arr+i)<<endl;
	}
	return 0;
}