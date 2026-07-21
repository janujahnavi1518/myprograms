#include<stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("enter the value of n:");
    scanf("%d",&n);
    for (int i=n ; i>=0 ; i--)
    {
        sum= sum+i;
}
printf("sum of 1st %d natural number is %d\n",n,sum);
return 0; 
}