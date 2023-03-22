int findDuplicate(int *arr, int n)
{
    int ar[n-1]={0};
    for(int i=0;i<n;i++)
    {
        if(ar[arr[i]]==0)
        ar[arr[i]]=1;
        else
        return arr[i];
    }
}
