# include<stdio.h>
int max(int n, int arr[])
{
    int mx = arr[0]; 
    for(int i=0;i<n;i++)
    {
        if (arr[i] > mx)
        {
            mx = arr[i];
        }
        
    }
    return mx;
}

int main()
{   int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
    printf("%d", max(n,arr));
    return 0;
}
