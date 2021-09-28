#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int secondcount(char a[])
{
    char startingpointer = 'a' , current , distance , result =strlen(a);
    for(int i=0 ; i < strlen(a) ; i++)
    {
        current = a[i];
        distance = abs(startingpointer-current);
        if(distance < 26-distance)
        result += distance;
        else
        result += 26- distance;
        startingpointer = current;
    }
    return result;
}

int main()
{
    char a[100];
    scanf("%s",a);
    printf("%d",secondcount(a));
}
