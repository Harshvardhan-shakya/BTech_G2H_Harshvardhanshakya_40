#include<stdio.h>
int main(){
    int arr[5] = {6,43,8,4,9};
    int sum = 0;
    int n = 5;
    for(int i = 0; i<5; i++){
        sum += arr[i];
    }
    printf("sum is :: %d",sum);
}