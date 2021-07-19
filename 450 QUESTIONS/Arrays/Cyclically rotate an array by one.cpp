void rotate(int arr[], int n)
{
    int last_ele  = arr[n-1];
   
    for(int i=n;i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = last_ele;
   
}