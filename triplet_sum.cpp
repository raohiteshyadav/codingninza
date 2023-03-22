int pairSum(int *arr, int n, int num,int st)
{
	int i=st;
    int j=n-1;
    int a=0;
    while(i<j)
    {
        if(arr[i]+arr[j]>num)
        {
            j--;
            continue;
        }
        else if(arr[i]+arr[j]<num)
        {
            i++;
            continue;
        }
        else
        {
             int m=i;
             int n=j;
             int o=0;
             int p=0;
             while(arr[m]==arr[i])
             {
                  o++;
                  m++;
             }
             while(arr[n]==arr[j])
             {
                 p++;
                 n--;
             }
             i=m;
             j=n;
             if(i-j>1)
             a+=o*(o-1)/2;
             else
             a+=o*p;
        }
    }
    return a;
}

int tripletSum(int *arr, int n, int num)
{
    int a=0;
    sort(arr,arr+n);
	for(int i=0;i<n-2;i++)
    {
       int b= pairSum(arr,n,num-arr[i],i+1);
       a+=b;
    }
    return a;
}
