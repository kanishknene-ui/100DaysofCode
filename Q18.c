//Write a program to assign grades based on a percentage input.

#include<stdio.h>
int main(){
    int percentage;
    printf("enter your percentage: \n");
    scanf("%d",&percentage);

    if(percentage<=100 && percentage>=90){
        printf("your grade is 'A'\n",percentage);
    }
     else if(percentage<=90 && percentage>=80){
    printf("your grade is 'B'\n",percentage);}
    else if(percentage<=80 && percentage>=65){
        printf("your grade is 'C'\n",percentage);
    }
    else if(percentage<=65 && percentage>=50){
        printf("your grade is 'D'\n",percentage);
    }
    else
    {
        printf("your grade is 'F'\n",percentage);
    }
    return 0;
}