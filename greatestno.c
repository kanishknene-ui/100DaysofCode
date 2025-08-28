#include<stdio.h>
int main(){
    int x;
    int y;
    int z;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);

    if(x>y&&z){
        printf("x is the greatest integer\n",x);
    }
    else if(y>x&z){
        printf("y is the greatest integer\n",y);
    }
    else{
        printf("z is the greatest integer\n",z);
    }
    return 0;
}