#include<stdio.h>
int main()
{
    int i,n,mul=1;
    printf("enter the size:");
    scanf("%d",&n);
    int a[n];
    printf("enter thye array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        mul=mul*a[i];
    }
    printf("the multiplication of the given array is:%d",mul);
}
