#include<stdio.h>
#include<ctype.h>
int main(){
char ch;

printf("entr a character: ");
scanf("%c",&ch);

if(ch =='a' || ch =='e' || ch =='i' || ch=='o' || ch =='u'){
    printf("it is a vowel\n",ch);
}
else{
    printf("it  is a consonant\n");
}
return 0;

}