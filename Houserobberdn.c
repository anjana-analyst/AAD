#include<stdio.h>
#define max(a,b) (a>b?a:b)
int houserobb(int n , int a[])
{
  int prev=0;
  int curr = a[n-1];
  if(n==0)
  return 0;
  if(n==1)
  return a[0];
  int temp;
  for(int i=n-2;i>=0;i--)
  {
     temp = max(curr , prev+a[i]);
     prev = curr;
     curr = temp;
  }
  return temp;
}
int main()
{
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("%d",houserobb(n,a));
}
