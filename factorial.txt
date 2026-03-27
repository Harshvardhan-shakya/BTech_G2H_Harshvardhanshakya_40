#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n :: ");
    scanf("%d",&n);
    int fact =1;
    if(n==0 || n==1){
            return 1;
    }else{
    for(int i=1;i<=n;i++){
       fact *=i;
     }
     printf("%d",fact);
    }
}