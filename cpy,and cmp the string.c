#include <stdio.h>
#include <string.h>
int main() 
{
    int i=0;
char s1[50],s2[10],s3[10];
printf("enter the strings:");
scanf("%s",s1);
scanf("%s",s2);
scanf("%s",s3);
printf("Entered string is:%s",s1);
printf("\n");
while(s1[i]!='\0')
{
    i++;
}
printf("the length of the first string is: %d",i);
printf("\n");
printf("the copied string is:%s",strcat(s1,s2));
printf("\n");
if(strcmp(s1,s3)==0)
{
    printf("the strings %s and %s are equal",s1,s3);
}
else
{
    printf("the strings %s and %s are not equal",s1,s3);
}
}
