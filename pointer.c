#include<stdio.h>

int main()
{ 
int no=65;
int *p=&no;
    printf("no=%d",no);
    printf("\n&no=%u",&no);
    printf("\np=%u",p);
    printf("\n&p=%u",&p);
    printf("\n*p=%d",*p);
    return 0;
}