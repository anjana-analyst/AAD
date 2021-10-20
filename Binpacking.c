#include <stdio.h>
int bins(int n , int a[] , int capacity)
{
    int count=1,k = capacity;
    for(int i=0;i<n;i++)
    {
        if(a[i] < k)
        {
          k-=a[i];
        }
        else
        {
          count++;
          k = capacity-a[i];
        }
    }
    return count;
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int capacity;
    scanf("%d",&capacity);
    printf("%d" , bins(n,a,capacity));
    return 0;
}
