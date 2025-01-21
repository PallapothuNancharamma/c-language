#include <stdio.h>
int main()
{
int i,n,j,temp;
printf("enter n:");
scanf("%d",&n);
int a[n];
printf("enter the array elements:");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("the sorted array is:");
printf("\n");
for(i=0;i<n;i++)
{
  for(j=i+1;j<n;j++) 
  {
      if(a[i]>a[j])
      {
           temp=a[i];
         a[i]=a[j];
         a[j]=temp;
       }     
  }
}
for(i=0;i<n;i++)
{
     printf("%d",a[i]);
         printf("\n");
}
}
