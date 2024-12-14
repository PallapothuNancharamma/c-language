#include<stdio.h>
int main()
{
int i,sum=0,n;
printf("enter n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
  if((i%2)==0)
  {
   sum=i*i*i+sum;
  }
}
printf("the sum of cubes of numbers from 1 to %d is:%d",n,sum);
}
