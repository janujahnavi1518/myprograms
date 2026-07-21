#include<stdio.h>
int main()
{
int pin;
float balance = 5000;
float ammount;
printf("enter pin:");
scanf("%d",&pin);
if(pin == 1234)
{
    printf("enter withdrawal amount: ");
    scanf("%f",&amount);
    if(amount <= balance);
    { 
        printf("transaction successfully\n");
        printf("please collect your cash\n");
        printf("remaining balance = %.2f\n",balance = amount);
    }
    else
    {
        printf("insufficient balance\n");
    }
 }
    else
    {
        printf("invalid pin\n");
    }
    return 0;
}
