#include <stdio.h>
#include<stdlib.h>
void main()
{
    int *p = (int *)malloc(4 * sizeof(int));
    p[0] =89;
    p[1] = 100;
    p[2] = 87;
    p[3] = 43;
    printf("%d", p[0]);
}