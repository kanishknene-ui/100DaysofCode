#include<stdio.h>
int main(){
    int sec;
    int h;
    int m;
    int s;
printf("input time\n");
scanf("%d",&sec);
h=(sec/3600);
m=(sec-(sec % 3600)/60);
s=(sec-(sec%60));
printf("H:M:S - %02d:%02d:%02d\n",h,m,s);
return 0;

}