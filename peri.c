#include<stdio.h>
float perimeter(float r)
{
    const float pi=3.14;
    float perimeter=2*pi*r;
    return perimeter;
}
void main()
{
    float r=6;
    printf("%f"\n,perimeter(r));
}