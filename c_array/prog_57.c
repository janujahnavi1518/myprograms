#include<stdio.h>
int main()
{
    int number[6];
    printf("enter the elements of array:\n");
    for(int i = 0; i < 6; i++)
    {
        printf("enter the value of number[%d]: ",i);
        scanf("%d",&number[i]);
    }
    printf("\n");
    printf("================================\n");
    printf("printing array element of the screen: \n");
    printf("================================\n");
    printf("\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n",number[i]);
    }
    return 0;
}