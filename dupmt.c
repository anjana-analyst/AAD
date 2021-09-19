#include<stdio.h>
#include<math.h>
int dup(int n , int arr[])
{
  int sum=0;
  for(int i=0;i<n;i++)
  {
    sum+=arr[i];
  }
  int k = n*(n-1)/2;
  return abs(sum-k);
}

int main()
{
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("%d",dup(n,a));
}
