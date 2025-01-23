#include <stdio.h>
#include <string.h>
int main() 
{
    int i=0,alphabet=0,digit=0,special=0;
char s1[50];
printf("enter the string:");
scanf("%s",s1);
while(s1[i]!='\0')
{
    if((s1[i]>='a'&&s1[i]<='z')||(s1[i]>='A'&&s1[i]<='Z'))
    {
        alphabet++;
    }
    if(s1[i]>=0&&s1[i]<=9)
    {
        digit++;
    }
    else
    {
        special++;
    }
    i++;
}
printf("the no.of digits in a string is:%d",digit);
printf("\nthe no.of alphabets in a string is:%d",alphabet);
printf("\nthe no.of special chraecters in a string is:%d",special);
}
