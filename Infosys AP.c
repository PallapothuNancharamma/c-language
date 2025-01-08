#include<stdio.h>
int main()
{
int A1,A2,d,n;
printf("Enter Roll no.of A1:");
scanf("%d",&A1);
printf("Enter Roll no.of A2:");
scanf("%d",&A2);
d=A1-A2;
printf("I am the student of ");
scanf("%d",&n);
int myrollnumber=A1+(n-1)*d;
printf("my roll number is %d",myrollnumber);
}
