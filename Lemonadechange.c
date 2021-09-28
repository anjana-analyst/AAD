#include<stdio.h>
int change(int a[], int n)
{
    int five=0,ten=0,twenty=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==5)
        {
          five++;
        }
        else if (a[i]==10)
        {
            ten++;
            if(five > 0)
            {
                five--;
            }
            else {return 1;}
        }
        else
        {
            twenty++;
            if(five>0 && ten>0)
            {
                five--;
                ten--;
            }
            else if(five>2)
            {
                five-=3;
            }
            else {return 1;}
        }
    }
    return 0;
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int c = change(a,n);
    if(c==0) printf("true");
    else printf("false");
}
