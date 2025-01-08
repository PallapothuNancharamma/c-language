#include<stdio.h>
int main()
{
    int i,n,sum=0;
    float avg;
    printf("enter size:");
    scanf("%d",&n);
    int a[n];
    printf("enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
     sum=sum+a[i];  
    }
    avg=sum/n;
    printf("the sum elements in an array is %f\n",avg);
  
}
