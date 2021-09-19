#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int i=0,peak=0,valley=0,profit=0;
    while(i<n-1)
    {
        while(i<n-1 && a[i]>=a[i+1])
        i++;
        valley = a[i];
        while(i<n-1 && a[i]<=a[i+1])
        i++;
        peak = a[i];
        profit=profit+(peak-valley);
    }
    printf("%d", profit);
    return 0;
}
