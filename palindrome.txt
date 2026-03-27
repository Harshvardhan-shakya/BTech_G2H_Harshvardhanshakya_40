#include<stdio.h>
#include<math.h>
int main(){
    int n ;
    printf("Enter n :: ");
    scanf("%d",&n);
    int temp = n;
    int ntemp = n;
    int count = 0;
    while(n >0){
        count ++;
        n /= 10;
    }
    int rev = 0;
    for(int i = count; i>0;i--){
        int ld = temp%10;
        rev += ld*pow(10,i-1);
        temp /= 10;
    }
   if(ntemp == rev){
    printf("palindrome number");
   }else{
    printf("not palindrome ");
   }
}