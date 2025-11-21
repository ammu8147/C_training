#include<stdio.h>
int sum_digits_recur (int n)
{
    if (n==o)
    return 0;
    int digits= n%10;
    return digits+sum_digits_recur(n/10);
}
void main()
{
    int n=398;
    printf("%d",sum_digits_recur(n));
}