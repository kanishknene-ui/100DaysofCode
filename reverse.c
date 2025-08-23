//Write a program to swap two numbers using a third variable.//
#include<stdio.h>
int main(){
    int a=4;
    int b=5;
    int c;
    printf("the value of a is %d\n",a);
    printf("the value of b is %d\n",b); 

    //now//
    c=a;
    printf("the value of c is %d\n",c);
    //now//
    (a=b);
    printf("the value of a is %d\n",a);
    //now//
    (b=c);
    printf("the value of b is %d\n",b);
    return 0;
}