#include<stdio.h>
int sum(int n)
{
    int i,sum=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}
int main()
{
    int f;
    printf("%d",sum(f));
}
