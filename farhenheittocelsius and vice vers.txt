#include<stdio.h>
int main(){
    float temp ;
    float C , F;
    int c;
    printf("Enter the temprature ");
    scanf("%f",&temp);

    printf("Enter 1 for celcius to farenheit || press 0 for farenhiet to celcius  :: ");
    scanf("%d",&c);
    if( c == 1){
       F = temp*(5/9)+32;
        printf("In farenhiet is %f",F);
    }else if(c == 0){
        C = (temp - 32)*5/9; 
        printf("In celcius is %f",C);
    }else{
        printf("----INVALID INPUT-----");
    }

}