#include<stdio.h>
void bucketing(int n , int arr[])
{
   int b[n-1];
   for(int i=0;i<n;i++)
   {
     b[i]=0;
   }
   for(int j=0;j<n;j++)
   {
     b[arr[j]-1]++;
   }
   for(int k=0;k<n;k++)
   {
     if(b[k]==2)
     {
       printf("%d ",++k);
     }
   }

}
int main()
{
  int n=5;
  int arr[5]={1,2,3,4,2};
  bucketing(n,arr);
}
