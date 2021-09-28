#include<stdio.h>
int choco(int n)
{
    if(n==1 || n==2) return 1;
    if(n==3) return 2;
    else
    return choco(n-1)+choco(n-3);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",choco(n));
}
