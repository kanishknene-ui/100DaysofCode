//Write a program to display the day of the week based on a number (1–7) using switch-case.



#include<stdio.h>
int main(){
    int day;
printf("enter the number from (1-7): \n");
scanf("%d",&day);

switch(day){
    case 1:
    printf("sunday\n");
case 2:
printf("monday\n",day);
    case 3:
    printf("tuesday\n",day);
    break;
    case 4:
    printf("wednesday \n",day);
    break;
    case 5:
    printf("thursday \n",day);
    break;
    case 6:
    break;
    printf(" friday\n",day);
    break;
    case 7:
    printf(" saturday'\n",day);
    break;
    default:printf("Invalid input! Please enter a number between 1 and 7.\n");
    } 
return 0;
}