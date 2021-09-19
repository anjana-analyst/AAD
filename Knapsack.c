#include<stdio.h>
int maxwv(int items , int weight[], int value[] , int capacity , int index)
{
    int vin,vout;
    if(index==items || capacity == 0)
    {
    return 0;
    }
    if(weight[index]<=capacity)
    {
        vin = maxwv(items , weight , value , capacity - weight[index] ,index+1)+value[index];
        vout = maxwv(items , weight , value , capacity, index+1);
        if(vin>vout)
        return vin;
        else
        return vout;
    }
    else
    {
        vout = maxwv(items , weight , value , capacity , index+1);
        return vout;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int w[n],v[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&w[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
    }
    int c;
    scanf("%d",&c);
    printf("%d",maxwv(n,w,v,c,0));
    
}
