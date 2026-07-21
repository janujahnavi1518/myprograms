#include<stdio.h>
void greet()
{
    printf("welcome to c programming.\n");
}
int main()
{
    greet();
    printf("i am calling the greet() function again.\n");
    greet();
    return 0;
}