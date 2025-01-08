#include<stdio.h>
int main()
{
    int i,n,j,count=0;
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
     for(j=i+1;j<n;j++)
     {
         if(a[i]==a[j])
         {
           count++;  
         }
     }
    }
    printf("%d Duplicate values occured in an array",count);
}
