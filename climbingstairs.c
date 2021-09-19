#include<stdio.h>
int bruteforce(int n)
{
  if(n==1|n==2)
  return n;
  else
  return bruteforce(n-1)+bruteforce(n-2);
}

int memoization(int n)
{
  int series[10];
  series[0]=series[1]=1;
  for(int i=2;i<=n;i++)
  series[i]=-1;
  if(series[n]!=-1)
  return series[n];
  series[n]=memoization(n-1)+memoization(n-2);
  return series[n];
}

int tabulation(int n)
{
   int series[10];
   series[0]=series[1]=1;
   for(int i=2;i<=n;i++)
   {
     series[i]=series[i-1]+series[i-2];
   }
   return series[n];
}

int fibanocci(int n)
{
  int t,f,s;
  f=s=1;
  for(int i=2;i<=n;i++)
  {
    t=f+s;
    f=s;
    s=t;
  }
  return t;
}

int main()
{
  int n;
  scanf("%d",&n);
  printf("Brute force %d",bruteforce(n));
  printf("\nmemoization %d",memoization(n));
  printf("\nTabulation %d",tabulation(n));
  printf("\nFibonacci %d",fibanocci(n));
}
