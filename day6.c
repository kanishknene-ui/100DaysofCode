#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x % 2 == 0){
    printf("the number is an even number\n",x);}
    else{
        printf("the number is an odd number\n");
    }
    return 0;
}