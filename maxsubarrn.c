#include<stdio.h>
#include<limits.h>
#define max(a,b) (a>b)?a:b
int maxsubarr(int a[], int low , int high)
{
  if(high==low)
  return a[low];
  int mid = (low+high)/2;

  int left_max = INT_MIN , sum=0;
  for(int i = mid ; i>=low ; i--)
  {
     sum+=a[i];
     if(sum>left_max)
     left_max=sum;
  }

  int right_max = INT_MIN , sum1=0;
  for(int i = mid+1 ; i<=high ; i++)
  {
     sum1+=a[i];
     if(sum1>right_max)
     right_max=sum1;
  }

  int max_leftright = max(maxsubarr(a,low,mid),maxsubarr(a,mid+1,high));
  return max(max_leftright,left_max+right_max);

}

int main()
{
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("%d",maxsubarr(a,0,n-1));
}
