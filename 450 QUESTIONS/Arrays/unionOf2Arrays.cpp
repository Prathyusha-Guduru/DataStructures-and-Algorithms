class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        int arr[m+n];
        for(int i=0;i<n;i++){
            arr[i] = a[i];
        }
        for(int i=0;i<m;i++){
            arr[n+i] = b[i];
        }
        
	sort(arr, arr + n+m);
	
	int k = 0;
	
	if(n+m>0)
		arr[k++] = arr[0];
	
	// compare adjacent elements
	for (int i = 1; i < n+m; ++i) {		
		// if the current element is not equal to the previous element
		// set arr[k] to arr[i]
		if(arr[i] != arr[i-1])
			arr[k++] = arr[i];
	}


	return k;
    }
};