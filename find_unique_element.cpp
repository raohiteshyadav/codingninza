int findUnique(int *arr, int n) {
        int sum=arr[0];
        for(int j=1;j<n;j++)
        {
           sum=sum^arr[j]; 
        }
        return sum;
}
