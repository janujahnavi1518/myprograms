#include<stdio.h>
int add(int a,int b);
int main()
 {
    int num1, num2, add_result;
    printf("enter two numbers:");
    scanf("%d %d",&num1,&num2);
    add_result = add(num1,num2);
    printf("sum = %d\n",add_result);
    return 0;
}
int add(int a,int b)
{
    return a+b;
}
