#include<stdio.h>
int main()
{
int i,res=0,n;
printf("enter n:");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
    res=i*n;
    printf("%d",res);
    printf("\n");
}
}
