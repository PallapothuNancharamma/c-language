#include<stdio.h>
int add(int a,int b)
{
    int c;
    c=a+b;
    printf("%d",c);
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    add(x,y);
}
