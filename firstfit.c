int firstfit(int n , int a[] , int capacity )
{
    int bin[n],res=0;
    for(int i=0;i<n;i++)
    {
        int j;
        for(j=0;j<res;j++)
        {
            if(bin[j]>=a[i])
            {
              bin[j]-=a[i];
              break;
            }
        }
        if(j==res)
        {
            bin[res]=capacity-a[i];
            res++;
        }
    }
    return res;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int capacity;
    scanf("%d",&capacity);
    printf("%d",firstfit(n,a,capacity));
    return 0;
}
