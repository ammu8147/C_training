#include<stdio.h>
#include<stdlib.h>
void main()
{
    float *p =(float *)calloc(4,sizeof(float));
    p[0]=10;
    p[1]=20;
    p[2]=30;
    p[3]=40;
    printf("%f,%f,%f,%f",p[0],p[1],p[2],p[3]);
}