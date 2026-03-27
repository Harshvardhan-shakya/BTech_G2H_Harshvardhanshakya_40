#include<stdio.h>
#include<math.h>
int main(){
    float pr , r, t;
    float SI = 0, CI = 0 ;
    int n ;
    printf("Enter the principal amount , rate , time :: ");
    scanf("%f%f%f",&pr,&r,&t);
    SI = (pr*r*t)/100.0;
    printf("your simple interest is :: %f",SI);
    printf("\n");
    printf("Enter the compunding interest for CI ::");
    scanf("%d",&n);
    CI = pr*pow((1+(r/(n*100))),(n*t)) - pr;
    printf("your compound interest is :: %f",CI);

}