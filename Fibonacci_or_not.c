#include<stdio.h>
int main()
{
    int n,a=0,b=1,c;
    scanf("%d",&n);
    while(a<n)
    {
        c=a+b;
        a=b;
        b=c;
    }
    if(a==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}