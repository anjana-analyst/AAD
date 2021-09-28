#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int station[n] , cost[n];
    for(int i=0;i<n;i++)
    scanf("%d",&station[i]);
    for(int j=0;j<n;j++)
    scanf("%d",&cost[j]);
    int totalgas=0 , currentgas=0 , startingpoint=0;
    for(int i=0;i<n;i++)
    {
        totalgas += station[i]-cost[i];
        currentgas +=station[i]-cost[i];
        if(currentgas < 0)
        {
            startingpoint = i+1;
            currentgas=0;
        }
    }
    if(totalgas >= 0) printf("%d",startingpoint);
    else printf("-1");
}
