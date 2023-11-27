#include<stdio.h>

int max_of_3(int x, int y, int z)
{
    int maximum = x;
    if(x >= y)
    {
        if (x >= z)
        {
            maximum = x;
        }
    }
    else if (y >= z)
    {
        maximum = y;
    }
    else
    {
        maximum = z;
    }   
    
    return maximum;
}

int main()
{   
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    printf("%d", max_of_3(x, y, z));
    return 0;
}
