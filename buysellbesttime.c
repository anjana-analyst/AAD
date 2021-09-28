#include<stdio.h>
int profit(int arr[] , int n)
{
    int minprice = arr[0] , maxprofit = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<minprice)
        minprice= arr[i];
        
        else if(arr[i]-minprice > maxprofit)
        maxprofit = arr[i]-minprice;
    }
    return maxprofit;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("%d",profit(a,n));
}
