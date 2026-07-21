#include<stdio.h> \\importing std input output library
int main()
{
    int age; \\ declaring age variable
char name; \\ declaring name variable
printf("hello,good morning:\n");
printf("Enter your name:");
scanf("%s",&name);
printf("enter your age:");
scanf("%d",age);
 printf("Thank you %c.\n you are awesome.",name,age);
return 0;
}