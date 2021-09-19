#include<stdio.h>
int coindenominations(int amount)
{
  int coins=0;
  int changes[9] = { 1, 2, 5, 10, 20, 50, 100, 500, 1000};
  for(int i=9;i>=0;i--)
  {
    if(changes[i]<=amount)
    {
       coins+=amount/changes[i];
       amount=amount%changes[i];
    }
  }
  return coins;
}
int main()
{
  int n;
  scanf("%d",&n);
  printf("%d",coindenominations(n));
}
