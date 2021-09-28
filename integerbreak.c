#include<stdio.h>
int prod()
{
    int n;
    scanf("%d",&n);
    int p=1;
    if(n==2 || n==3) return n-1;
    while(n>4)
    {
        n-=3;
        p*=3;
    }
    return n*p;
}
int main()
{
    printf("%d",prod());
}
