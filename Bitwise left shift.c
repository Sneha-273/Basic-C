#include<stdio.h>

int main()
{
int n,m;
    printf("Left shift.");
    printf("\nEnter number=");
    scanf("%d",&n);
    printf("How many times jumping to left=");
    scanf("%d",&m);
    printf("after left shift=%d",n<<m);
    return 0;
}