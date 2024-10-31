#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    float average;
    printf("enter the marks of 5 subjects:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    average=((a+b+c+d+e)/5);
    printf("%f",average);
    if(average>90)
    {
        printf("the grade of a student is A+");
    }
    else if(average>80)
    {
        printf("the grade of a student is A");
    }
     else if(average>70)
    {
        printf("the grade of a student is B");
    }
       else if(average>60)
    {
       printf("the grade of a student is C");
    }
       else if(average>50)
    {
        printf("the grade of a student is D");
    }
        else
    {
        printf("the student is fail");
    }
}
