#include<stdio.h>

int main()
{
    int x,y,z;
    for(z=0;z<5;z++)
    {
    for(x=0;x<5;x++)
    {
    for(y=0;y<5;y++)
    {
    printf("*");
    }
    printf("-");
    }
    printf("\n");
    }
    return 0;
}