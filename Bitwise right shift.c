#include<stdio.h>

int main()
{ 
    int n,m;
    printf("Right shift.");
    printf("\nEnter Decimal number=");
    scanf("%d",&n);
    printf("How many times jumping to right side=");
    scanf("%d",&m);
    printf("After right shift=%d",n>>m);
    return 0;
}