#include<stdio.h>
void maxsubarray(int n , int arr[])
{
  int curr_sum,max=0;
  for(int i =0 ; i<n;i++)
  {
    curr_sum=0;
    for(int j=i ; j<n;j++)
    {
      curr_sum = curr_sum+arr[j];
      max = max>curr_sum?max:curr_sum;
    }
  }
  printf("%d",max);
}
int main()
{
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  scanf("%d",&a[i]);
  maxsubarray(n, a);
}
