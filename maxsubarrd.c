#include<stdio.h>
void maxsubarr(int n , int arr[])
{
  int curr = arr[0] , max=arr[0];
  for(int i=1;i<n;i++)
  {
   if(curr<0)
   {
     curr=arr[i];
   }
   else
   {
     curr=curr+arr[i];
   }
   max = max>curr?max:curr;
  }
  printf("%d",max);
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
  maxsubarr(n,a);
}
