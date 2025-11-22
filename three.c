//writr a c program which adds three numbers by call by reference//
#include<stdio.h>
void sum(int*a,int*b,int*c)
{
    int sum=*a +*b +*c;
    printf("%d",sum);
}
void main()
{
    int a=9;
    int b=7;
    int c=5;
    sum(&a,&b,&c);
}
