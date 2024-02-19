#include<stdio.h>
int main()
{
    int i,n,x,idx=-1;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
        scanf("%d",&x);
        int low=0,high=n-1,mid;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(arr[mid]==x)
            {
                idx=mid;
                break ;
            }
            else if(arr[mid]<low)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        if(idx==-1)
        {
            printf("The value %d is not present in the array");
        }
        else
        {
            printf("The value %d is present in the index %d",x,idx);
        }
        return 0;

}