#include<stdio.h>
int main(){
    int x;
    int y;
    int z;
    int w;
    
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    w=2*(x+y);
    z=x*y;
    printf("the area of the rectangle is %d \n",z);
    printf("the perimeter of the rectangle is %d\n",w);
    return 0;
}