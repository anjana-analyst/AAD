#include<stdio.h>
int chocolates(int a[],int b[] , int n ,int m)
{
  int temp,temp1;
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n-i-1;j++)
      {
          if(a[j]>a[j+1])
          {
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
          }
      }
  }
  
  for(int i=0;i<m;i++)
  {
      for(int j=0;j<m-i-1;j++)
      {
          if(b[j]>b[j+1])
          {
              temp1=b[j];
              b[j]=b[j+1];
              b[j+1]=temp1;
          }
      }
  }
  int i=0,j=0;
  while(i<n && j<m)
  {
      if(a[i]<=b[j])
      i++;
      j++;
  }
  return i;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int m;
    scanf("%d",&m);
    int b[m];
    for(int i=0;i<m;i++)
    scanf("%d",&b[i]);
    printf("%d",chocolates(a,b,n,m));
}
