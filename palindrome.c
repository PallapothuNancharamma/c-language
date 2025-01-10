#include<stdio.h>
int main()
{
    int rem=0,rev=0,n,temp;
    printf("enter the string :");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
 rem=n%10;
 rev=rev*10+rem;
 n=n/10;
    }
    if(rev==temp)
    {
        printf("the string %d is a palindrome",temp);
    }
    else
    {
         printf("the string %d is not a palindrome",temp);

    }
}
