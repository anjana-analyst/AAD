#include<stdio.h>
#define max(a,b) (a>b?a:b)
int houserobber(int n , int a[])
{
  int maxrobamount[100];
  if(n==0)
  return 0;
  if(n==1)
  return a[0];
  maxrobamount[n]=0;
  maxrobamount[n-1]=a[n-1];
  for(int i=n-2;i>=0;i--)
  {
    maxrobamount[i]=max(maxrobamount[i+1],maxrobamount[i+2]+a[i]);
  }
  return maxrobamount[0];
}
int main()
{
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("%d",houserobber(n,a));
}
