#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
  for(j=1;j<=i;j++)
  {
      printf("*\t");
  }
  printf("\n");
    }
for(i=5;i>=1;i--)
    {
  for(j=1;j<=i;j++)
  {
      printf("*\t");
  }
  printf("\n");
    }
}
