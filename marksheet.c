#include<stdio.h>

int main()
{
    int p,c,m,b,e,mk,n;
    float per=0;
    for(int i=0;i<21;i++)
    {
    printf("\nCandidate name=");
    scanf("%s",&n);
    printf("physics marks=");
    scanf("%d",&p);
    printf("chemistry marks=");
    scanf("%d",&c);
    printf("mathematics marks=");
    
    scanf("%d",&m);
    printf("Biology marks=");
    scanf("%d",&b);
    printf("English marks=");
    scanf("%d",&e);
    
    mk=p+c+m+b+e;
    printf("total marks=%d",mk);
    per=(mk/500)*100;
    printf("\npersentage=%f",per);
    }
    return 0;
}