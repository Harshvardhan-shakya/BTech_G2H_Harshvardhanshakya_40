#include<stdio.h>
int main()
{
    int n;
    printf("enter number of elements in an array:");
    scanf("%d",&n);
    int a[n];
    int i,j;
    printf("Enter  elements in array");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("largest number in array is %d.",a[n-1]);
    return 0;
}