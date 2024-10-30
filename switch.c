#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("enter the a,b and opeator:");
    scanf("%d%d %c",&a,&b,&op);
    switch(op)
    {
        case'+':printf("addition of 2 numbers: %d",a+b);
        break;
        case'-':printf("subtraction of 2 numbers: %d",a-b);
        break;
        case'*':printf("multiplication of 2 numbers: %d",a*b);
        break; 
        case'/':printf("division of 2 numbers: %d",a/b);
        break; 
        case'%':printf("modulas of 2 numbers: %d",a%b);
        break;
    }
}
