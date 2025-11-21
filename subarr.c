// write a c function which will accept an array, it size as n and written the difference between first and last element//
#include <stdio.h>
#include <stdlib.h>
int sub_arr(int arr[], int n)
{
    int sub = arr[0] - arr[n - 1];
    return abs(sub);
}
{
void main()
 int arr[2] = {40, 56} ;
 int n = 2;
 printf("%d",difference(arr,n));
}
