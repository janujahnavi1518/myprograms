#include<stdio.h>
int main()
{
    int number;
    printf("enter a number:");
    scanf("%d",&number);
    if(number>0)
    {
        printf("the entered is positive");
    }
    else if(number < 0)
    {
        printf("the entered number is negative");
    }
    else
    {
        printf("the entered number is zero:");
    }
    return 0;
 }
