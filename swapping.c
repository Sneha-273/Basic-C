#include<stdio.h>

int main()
{
void swap(int*,int*);

    int no1,no2;
    printf("enter 1st number=");
    scanf("%d",&no1);
    printf("enter 2nd number=");
    scanf("%d",&no2);
    swap(&no1,&no2);
    printf("\nAfter swapping no1=%d,no2=%d",no1,no2);
    return 0;
}
void swap (int* n1,int* n2)
{
int temp;
temp=*n1;
*n1=*n2;
*n2=temp;
}
