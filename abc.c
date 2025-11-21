//create a structure with the 3 variables name of a car, maximum speed, price. store these in array of structure and display them//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct car
{
    char name[100];
    float speed;
    float price;

};
void main()
{
    int n;
    printf("enter the number of cars:");
    scanf("%d",&n);
    struct car c[n];
    for (int i=0;i<n;i++)
    {
        printf("enter the name of car:");
        scanf("%s",c[i].name);

        printf("enter the maximum speed of the car:");
        scanf("%f",&c[i].speed);

        printf("enter the price of the car:");
        scanf("%f",&c[i].price);
    }
}