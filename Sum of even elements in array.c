#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter size:");
    scanf("%d",&n);
    int a[n];
    printf("enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the sum of even elements in an array are:");
     for(i=0;i<n;i++)
     {
         if(a[i]%2==0)
         {
             sum=sum+a[i];
         }
         
     }
   printf("%d\n",sum); 
}     
     
