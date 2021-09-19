#include<stdio.h>
int main()
{
    int k;
    scanf("%d",&k);
    while(k--)
    {
        int n , n1;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        scanf("%d",&n1);
        int b[n1];
        for(int i=0;i<n1;i++)
        {
            scanf("%d",&b[i]);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n1;j++)
            {
                if(a[i]==b[j])
                {
                    printf("%d ",a[i]);
                }
            }
        }
    }
    return 0;
}
