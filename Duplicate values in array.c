#include<stdio.h>
int main()
{
    int i,n,j;
    float avg;
    printf("enter size:");
    scanf("%d",&n);
    int a[n];
    printf("enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the duplicate elements in an array is:");
    for(i=0;i<n;i++)
    {
     for(j=i+1;j<n;j++)
     {
         if(a[i]==a[j])
         {
           printf("%d\n",a[i]);  
         }
     }
    }
}
