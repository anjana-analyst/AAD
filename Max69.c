#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%s",a);
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]=='6')
        {
            a[i]='9';
            break;
        }
    }
    printf("%s",a);
}
