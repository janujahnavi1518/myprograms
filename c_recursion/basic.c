#include<stdio.h>
int main(){
    int x=0,i=0;
    scanf("%d",&x);
    for(i=0;i<20;i++)
    {
        x=x+20;
        printf("%d\n",x);
    }
    return 0;
}