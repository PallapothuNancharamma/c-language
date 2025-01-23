#include <stdio.h>
#include <string.h>
int main() 
{
    int i=0,l;
char s1[50];
printf("enter the string:");
scanf("%s",s1);
printf("the reverse of a string is:");
 printf("\n");
 l=strlen(s1);
for(i=l-1;i>=0;i--)
{
    printf("%c",s1[i]);
    printf("\n");
}
}
