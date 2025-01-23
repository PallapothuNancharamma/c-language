#include <stdio.h>
#include <string.h>
int main() 
{
    int i=0,word=0;
char s1[50];
printf("enter the string:");
scanf("%s",s1);
printf("the number of words in a string is:");
while(s1[i]!='/0')
{
    if(s1[i]==' '||s1[i]=='\n')
    {
        word++;
    }
    i++;
}
printf("%d",word);
}
