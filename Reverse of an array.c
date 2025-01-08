#include<stdio.h>
int main()
{
    int i,n;
    printf("enter size:");
    scanf("%d",&n);
    int a[n];
    printf("enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The reverse of the array elements are:");
     for(i=n-1;i>=0;i--)
     {
        printf("%d\n",a[i]);
     }
}     
     
