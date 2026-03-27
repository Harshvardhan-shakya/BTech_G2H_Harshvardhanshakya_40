#include<stdio.h>
#include<math.h>
int main() {
    int n ;
    printf("Enter the n :: ");
        scanf("%d",&n);
    int sum = 0;
    for(int i= 1 ; i<= n;i++){
        sum += i;
    }
        printf("Sum of first n numbers are %d", sum);
}