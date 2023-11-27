#include<stdio.h>


void second_largest_bad(int a,int b,int c,int d,int e)
{
// Finding the first max among all five elements
    int first_max = a, second_max;
    if (b > first_max)
    {
        first_max = b;
    }
    if (c > first_max)
    {
        first_max = c;
    }
    if (d > first_max)
    {
        first_max = d;
    }
    if (e > first_max)
    {
        first_max = e;
    }
 // Finding the second max among all five elements
    second_max = a;
    if (b > second_max && b < first_max)
    {
        second_max = b;
    }
    if (c > second_max && c < first_max)
    {
        second_max = c;
    }
    if (d > second_max && d < first_max)
    {
        second_max = d;
    }
    if (e > second_max && e < first_max)
    {
        second_max = e;
    }
    printf("%d",second_max);
}

int main()
{
    int a,b,c,d,e;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    second_largest_bad(a,b,c,d,e);
    return 0;
}
