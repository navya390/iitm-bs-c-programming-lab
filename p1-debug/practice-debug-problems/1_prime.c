# include<stdio.h>
#include <math.h>

int prime(int n)
{
    if (n<2)
    {
        return 0;
    }
    else
    {
        for (int i=2; i <= sqrt(n); i++)
        {
            if (n%i == 0)
            {
                return 0;
            }
        }
    return 1;
    }
}

int main()
{
    int n, res;
    scanf("%d",&n);
    res = prime(n);
    if(res==0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
    return 0;
}
