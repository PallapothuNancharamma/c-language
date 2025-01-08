#include<stdio.h>
int main()
{
    int i,n,j=0,k=0,b[10],c[10];
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
         if(a[i]%2==0)
         {
             b[j]=a[i];
             j++;
         }
         else
         {
             c[k]=a[i];
             k++;
         }
     }
     printf("the even array is:");
     for(i=0;i<j;i++)
     {
         printf("%d\n",b[i]);
     }
     printf("the odd array is:");
      for(i=0;i<k;i++)
     {
         printf("%d\n",c[i]);
     }
}     
