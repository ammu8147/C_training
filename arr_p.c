#include<stdio.h>
void main()
{
    int arr[4] ={59,39,64,25};
    int *p = arr;
    printf("%d\n",*p);
    printf("%d\n",*(p+1));
}