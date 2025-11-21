#include<stdio.h>
int addarr (int arr[], int size)
{
    int result = 0;
    for (int i = 0; i<size; i++)
    {
        result=result+arr[i];
    }
    return result;
}
void main()
{
    int arr[3]={78,39,56};
    int size=3;
    printf("%d\n",addarr(arr,size));
}
