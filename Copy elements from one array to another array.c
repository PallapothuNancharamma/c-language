#include<stdio.h>
int main()
{
    int i,n;
    printf("enter size:");
    scanf("%d",&n);
    int a[n],b[n];
    printf("enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the new array elements are:");
     for(i=0;i<n;i++)
     {
       b[i]=a[i];  
     }
    for(i=0;i<n;i++)
    {
      printf("%d\n",b[i]); 
    }
}     
     
