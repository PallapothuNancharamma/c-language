#include<stdio.h>
int main()
{
    int n,c;
    
    printf("enter the value of n ");
    scanf("%d",&n);
     c=n%2;
    switch(c)
    {
     case 0:printf("%d is a even number",n);
     break;
     default:printf("%d is a odd number",n);
     break;
    }
}
