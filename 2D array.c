#include<stdio.h>

int main()
{
    int arr[2][3]={1,2,3,4,5,6};
    int x,y;
    for(x=0;x<2;x++)
    {
    for(y=0;y<3;y++)
    {
    printf("\n[%d][%d][%d]",x,y,arr[x][y]);
    }
    printf("\n");
    }
    return 0;
}