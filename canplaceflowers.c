int canplaceflowers(int n , int arr[] , int plants)
{
    int i=0,count=0;
    while(i < n)
    {
        if(arr[i]==0 && (i==0||arr[i+1]==0) && (i==n-1||arr[i-1]==0))
        {
        arr[i++]=1;
        count++;
        }
        if(count>=plants)
        return 0;
        i++;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int given;
    scanf("%d",&given);
    int c = canplaceflowers(n,a,given);
    if(c==1)
    printf("false");
    else
    printf("true");
}
