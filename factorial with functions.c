#include<stdio.h>
long int fact(int n)
{
    scanf("%d",&n);
    int i;
    long int fact=1;
    for(i=2;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("the factorial of%d is",n);
return fact;
}
int main()
{
    int f;
    printf(" %ld",fact(f));
}
