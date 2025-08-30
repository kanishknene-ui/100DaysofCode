//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include<stdio.h>
int main(){
int a;
int b;
int c;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a+b>c && b+c>a && c+a>b){
printf("it is a triangle\n");

}
else{
printf("it is not a triangle\n");}
if(a==b && b==c){
    printf("The triangle is equilateral\n");}
   else if(a==b && c!=a ||a==c && b!=a)
       { printf("it is an isosceles triangle\n");
        } 
        else{printf("it is a scalene triangle\n");}
        

return 0;
}



