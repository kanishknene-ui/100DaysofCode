#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x<0){
        printf("the number is negative\n",x);
    }
if(x==0){
    printf("the number is zero\n",x);

}
if(x>0){
    printf("the number is positive\n",x);
}
return 0;
}