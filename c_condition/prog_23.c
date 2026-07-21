#include<stdio.h>
int main()
{
    int number;
    printf("enter a number:");
    scanf("%d", &number);
    if(number % 2 == 0)    //check the condition
    {
        printf("even number\n");     //execute this if the condition is true
}
else
{
    printf("it is an odd number\n");  //execute this if the condition is false
}
return 0;
}