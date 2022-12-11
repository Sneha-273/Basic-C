#include<stdio.h>

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,73,58,45,89};
    printf("total elements in array=%d",sizeof(arr)/sizeof(arr[0]));
    return 0;
}