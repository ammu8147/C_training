//write a c function which will accept three parameters l,b,h and retuns volume of the cube
#include<stdio.h>
int volume(int l,int b,int h)
{
    int volume=l*b*h;
}
void main()
{
    int l=9;
    int b=5;
    int h=4;
    printf("%d\n",volume(l,b,h));
}