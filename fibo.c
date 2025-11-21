#include<stdio.h>
void fibo(int n)
{
    int a=0;
    int b=1;
    for(i=0;i<3;i++)
    {
        printf("%d  ",a);
        int sum=a+b;
        a=b;
        b=sum;
    }
}
void main()
{
    int n;
    printf("enter the n:\n");
    scanf("%d",&n);
    fibo(n);
}