#include <stdio.h>
int main() 
{
    int i=0;
char str[50];
printf("enter the string:");
scanf("%s",str);
printf("Entered string is:%s",str);
printf("\n");
while(str[i]!='\0')
{
    i++;
}
printf("the length of the string is: %d",i);
}
