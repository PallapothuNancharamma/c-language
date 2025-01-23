#include <stdio.h>
#include <string.h>
int main() 
{
    int i=0;
char s1[50],s2[10],s3[10];
printf("enter the string:");
scanf("%s",s1);
printf("the characters of the string is:");
 printf("\n");
while(s1[i]!='\0')
{
    printf("%c",s1[i]);
    printf("\n");
    i++;
}
}
