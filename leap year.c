#include<stdio.h>
int leap(int);
main()
{
    int y,a;
    printf("Enter the year\n");
    scanf("%d",&y);
    a=leap(y);
    if(a==1)
    {
        printf("Leap year\n");
    }
    else
    {
        printf("Not a leap year\n");
    }
}
int leap(int y)
{
    if(y%400==0)
    {
        return 1;
    }
    else if(y%4==0)
    {
        return 1;
    }
    else if(y%100==0)
    {
        return 0;
    }
    else
    {
        return 0;
    }
}
