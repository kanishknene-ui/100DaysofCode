#include<stdio.h>
#include<math.h>
int main(){
    float P;
    float T;
    float R;
    float n;
    float SI;
    float CI;
    printf("enter P\n: ");
    scanf("%f",&P);
    printf("enter R(in%%)\n: ");
    scanf("%f",&R);
    printf("enter time(in years)\n: ");
    scanf("%f",&T);
            SI=(P*T*R)/100;
    printf("the simmple interest is %f\n",SI);

CI= P * (pow((1 + R / 100), T)) - P;
printf("the compound interest is %f\n",CI);
return 0;
}