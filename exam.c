#include<stdio.h>
void exam(int m1,int m2,int m3)
{
    if(m1>=40&&m2>=40&&m3>=40)
    {
        printf("congradulations you are passed");
    }
    else
    {
        printf("you are failed");
    }
    float a=(m1+m2+m3)/3;
    printf("average is=%f",a);
}
void main()
{
    int m1=46;
    int m2=67;
    int m3=58;
    exam(m1,m2,m3);
}