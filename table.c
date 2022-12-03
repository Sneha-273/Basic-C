#include<stdio.h>

int main()
{
    int i,j;
    //printf("enter number=");
    //scanf("%d",&j);
    for(j=1; j<=10; j++)
    {
        for(i=1; i<=10; i++)
        {
            printf("%d",j*i);
        }
        printf("\n");
    }
    return 0;
}