#include<stdio.h>

int main()
{
    int a[5],i,j;
    printf("Your array=");
    for(j=0;j<5;j++)
    {
   scanf(" %d",&a[j]);  
    }
    printf("Enter the number=");
    scanf("%d",&i);
    for(j=0;j<5;j++)
    {
    if(i==a[j])
    {
    printf(" \nThe number found....!");
    printf("\nThe %d number is found at %d",a[j],j);
    break;
    } 
    }  
    if(i!=a[j])
     printf("\nThe number not found");
    return 0;
}