#include<stdio.h>
void names(char first[],char last[],int sw)
{
    int i=0;
    char full[100];
    while (first[i]!='\0') //adding first
    {
        full[i]=first[i];
        i++;
    }

    full[i]=' '; //adding space
    i++;

    int j=0;
    while (last[j]!='\0')
    {
        full[i]=last[j];
        i++;
        j++;
    }
    full [i]='\0';
    printf(" %s ",full);
    int length=i+1;
    if(length<sw)
    printf("fits in the screen!");
    else
    printf("does not fit in the screen!");
}
void main()
{
    char first[100]="raj";
    char last[100]="kumar";
    int sw=16;
    names(first,last,sw);
}