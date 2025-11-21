#include<stdio.h>
#include<stdlib.h>
void main()
{
    int*p=(int*)malloc(4*sizeof(int));
    p[0]=56;
    p[1]=67;
    p[2]=97;
    p[3]=45;
    p=(int*)realloc(p,4*sizeof(int));
    p[4]=78;
    p[5]=10;
    for(int i=0;i<6;i++)
    {
        printf("%d ",i);
    }
}