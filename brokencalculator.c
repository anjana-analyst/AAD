#include<stdio.h>
int broken(int start , int target)
{
    int count=0;
    while(target>start)
    {
        if(target%2 == 1)
        {
        target +=1;
        count++;
        }
        else
        {
        target = target/2;
        count++;
        }
    }
    count=count+start-target;
    return count;
}
int main()
{
    int start,end;
    scanf("%d",&start);
    scanf("%d",&end);
    printf("%d",broken(start,end));
}
