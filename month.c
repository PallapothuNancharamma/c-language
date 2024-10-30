#include<stdio.h>
int main()
{
    int n;
    printf("enter the a number from 1 to 12:");
    scanf("%d",&n);
    switch(n)
    {
        case 1:printf("%d month is january",n);
        break;
        case 2:printf("%d month is february",n);
         break;
        case 3:printf("%d month is march",n);
         break;
        case 4:printf("%d month is april",n);
         break;
        case 5:printf("%d month is may",n);
         break;
        case 6:printf("%d month is june",n); 
        break;
        case 7:printf("%d month is july",n);
        break;
        case 8:printf("%d month is august",n);
         break;
        case 9 :printf("%d month is september",n);
         break;
        case 10:printf("%d month is october",n);
         break;
        case 11:printf("%d month is november",n);
         break;
        case 12:printf("%d month is december",n);
        break;
        default:printf("%d is not a number of 1 to 12",n);
        break;
    }
}
