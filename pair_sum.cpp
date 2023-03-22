int pairSum(int *arr, int n, int num)
{
	int i=0;
    int j=n-1;
    sort(arr,arr+n);
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
