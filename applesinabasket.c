#include<stdio.h>
int main()
{
    int n,sum=0,temp;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    int flag=0,count,i;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum > 5000)
        {
            count=i;
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("%d",i);
    else
    printf("%d",count);
}
