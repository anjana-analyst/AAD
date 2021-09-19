#include<stdio.h>
void duplicate(int n , int arr[] )
{
    for(int i=0 ; i < n ; i++)
    {
       for(int j=i+1 ; j < n ; j++)
       {
          if(arr[i]==arr[j])
          {
             printf("%d",arr[i]);
          }
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
    scanf("%d", &a[i]);
  }
  duplicate(n,a);
  return 0;
}
