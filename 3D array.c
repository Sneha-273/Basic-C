#include<stdio.h>

int main()
{
    int arr[2][2][2]={1,2,3,4,5,6,7,8};
    int x,y,z;
    for(x=0;x<2;x++)
    {
    for(y=0;y<2;y++)
    {
    for(z=0;z<2;z++)
    {
    printf("[%d][%d][%d]=%d\n",x,y,z,arr[x][y][z]);
    }
    }
    printf("\n");
    }
    return 0;
}