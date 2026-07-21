#include<stdio.h> \\importing std input output library
int main()
{
    int age; \\ declaring age variable
char name; \\ declaring name variable
printf("hello,good morning:\n");
printf("Enter your name:");
scanf("%c",&name); \\ take input from user and assign to name variable 
printf("Thank you %c.\n you are awesome.",name);
return 0;
}