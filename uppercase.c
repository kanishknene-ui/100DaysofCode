#include<stdio.h>
#include<ctype.h>
int main(){
char ch;
printf("enter a character: \n");
scanf("%c",&ch);

if(ch >='A' && ch <='Z'){
    printf("it is an uppercase alphabet\n",ch);}
    else if(ch >='a' && ch <='z'){
        printf("it is a lowercase alphabet\n",ch);
    }
else{
    printf("it is a special character\n");
}

}