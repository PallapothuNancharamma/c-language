#include<stdio.h>
int main()
{
    int count=0,i,n;
    printf("enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
         {
             count++;
         }    
      
    }
    if(count==2)
    {
        printf("%d is a prime number",n);
    }
    else
    {
        printf("%d is not a prime number",n);
    }
    
}
