//Write a program to find profit or loss percentage given cost price and selling price.

#include<stdio.h>
int main(){
    float costprice;
    float sellprice;
    float profit;
    float loss;
    float profitpercentage;
    float losspercentage;
    float percentage;
    printf("enter the cost price: \n",costprice);
    scanf("%f",&costprice);
    printf("enter the sell price: \n",sellprice);
    scanf("%f",&sellprice);
    profit= sellprice-costprice;
   profitpercentage = (profit/costprice)*100;
   loss = costprice-sellprice;
   losspercentage=(loss/costprice)*100;
   if(sellprice>costprice){
    printf("you made a profit of %.2f%%\n",profitpercentage);
   }
 
   else if(loss=costprice-sellprice){
    printf("you made a loss of %.2f%%\n",losspercentage);
   }
    else{
    printf("no profit was made\n");
}
   return 0;
}