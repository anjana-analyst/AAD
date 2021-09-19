#include<stdio.h>
void pairdiff(int n ,int k , int arr[])
{
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(arr[i]-arr[j]==k)
      printf("%d  %d",arr[i],arr[j]);
    }
  }
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
  int k;
  scanf("%d",&k);
  pairdiff(n,k,a);
}
