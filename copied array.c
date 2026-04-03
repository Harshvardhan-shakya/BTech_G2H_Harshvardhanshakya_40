#include<stdio.h>
int main()
{
    int n;
    printf("enter number of elements in an array:");
    scanf("%d",&n);
    int a[n];
    int b[n];
    int i;
    printf("Enter  elements in array");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       b[i]=a[i];
    }
    printf("copied array: \n");
    for(i=0;i<n;i++)
    printf(" %d \n",b[i]);
    return 0;
}