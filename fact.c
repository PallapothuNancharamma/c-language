#include<stdio.h>
int main()
{
 long int fact=1;
 int n,i;
 printf("n");
 scanf("%d",&n);
 for(i=2;i<=n;i++)
{
    fact=fact*i;
}
printf("%d factorial is:%ld",n,fact);
    
}
