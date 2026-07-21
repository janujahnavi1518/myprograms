#include<stdio.h>
int main()
{
    int age;
    char name [20];
    printf("hello,good morning!\n");
    printf("enter your name:");
    scanf("%s",&name);
    printf("enter your age:");
    scanf("%d",&age);
    printf("thank you %s.\n your age is %d.\n you are awesome. ",name,age);
    return 0;
}