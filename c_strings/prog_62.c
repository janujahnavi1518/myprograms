#include<stdio.h>
#include<string.h> 
int main()
{
    char first[50] = "jahnavi";
    char second[] = "janu";
    strcat(first,second);
    printf("how the first string is: %s\n",first);
    return 0;
}
