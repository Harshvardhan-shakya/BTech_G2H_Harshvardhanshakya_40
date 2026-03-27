#include<stdio.h>
#include<math.h>
int main(){
    float a , b , c, d , e , per;
    printf("Enter the marks  of maths : ");
    scanf("%f",&a);
    printf("Enter the marks  of physics : ");
    scanf("%f",&b);
    printf("Enter the marks  of chemistry : ");
    scanf("%f",&c);
    printf("Enter the marks  of english : ");
    scanf("%f",&d);
    printf("Enter the marks  of computer : ");
    scanf("%f",&e);

     per = (a+b+c+d+e)/5;
     printf("Your percentage is :: %f",per);
    printf("\n");
     if(per >= 90 ){
        printf("Grade A ");
     }
     if(per >= 80 && per < 90){
        printf("Grade B ");
     }
     if(per >= 60 && per < 80){
        printf("Grade C ");
     }
     if(per < 60){
        printf("Grade D ");
     }
}