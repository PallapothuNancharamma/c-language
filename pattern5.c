#include<stdio.h>
int main()
{
    int i,j,n=1;
    for(i=1;i<=6;i++)
    { 
        for(j=1;j<=i;j++)
        {
            printf("%d\t",n++);
        }
        printf("\n");
    }
}
