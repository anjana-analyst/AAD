#include<stdio.h>
void pairdiff(int n ,int k , int a[])
{
  int left = 0 ,right = 1;
  while(left<n && right<n)
  {
  if(a[right]-a[left] > k)
  left++;
  if(a[right]-a[left] < k)
  right++;
  if(a[right]-a[left]==k)
  {
    printf("%d  %d",a[left],a[right]);
    break;
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
