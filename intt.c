#include<stdio.h>
int main()
{
    int k;
    scanf("%d",&k);
    while(k--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int n1;
        scanf("%d",&n1);
        int b[n1];
        for(int i=0;i<n1;i++)
        {
            scanf("%d",&b[i]);
        }
        int i=0,j=0;
        while(i<n && j<n1)
        {
            if(a[i]==b[j])
            {
                printf("%d ",a[i]);
                i++;
                j++;
            }
            if(a[i]>b[j])
            j++;
            if(a[i]<b[j])
            i++;
        }
    }
    return 0;
}
