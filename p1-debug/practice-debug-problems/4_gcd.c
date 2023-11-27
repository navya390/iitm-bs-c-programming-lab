#include<stdio.h>

int gcd(int m, int n)
{
    int a = m;
    int b = n;
    int temp;
    
    if (n > m)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (a % b == 0)
    {
        return b;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main()
{   
    int m,n;
    scanf("%d %d",&m,&n);
    printf("%d", gcd(m, n));
    return 0;
}
