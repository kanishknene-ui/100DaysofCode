#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x % 4 ==0)
    printf("it is a leap year\n",x);
    else{
        printf("it is not a leap year\n");}
    return 0;
    }