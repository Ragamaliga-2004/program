#include<stdio.h>
void main()
{
    int n,fact,x,i,sum=0;
    printf("Enter n value");
    sacnf("%d",&n);
    while(n>0)
    {
        x=n%10;
        fact=1;
        for(i=1;i<x;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    printf("%d",sum);
}
