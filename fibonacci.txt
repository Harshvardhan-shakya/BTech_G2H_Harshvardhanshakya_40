#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n :: ");
    scanf("%d",&n);
    int a = 0;
    int b = 1;
    int new ;
    int i = 0;
    while(i<=n){
        printf("\n%d",a);
        new = a+b;
        a = b;
        b = new;
        i++;
    }

}