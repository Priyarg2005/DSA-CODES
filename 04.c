#include<stdio.h>
float fine(int);
main()
{
    float f;
    int d;
    printf("Enter the number of days\n");
    scanf("%d",&d);
    f=fine(d);
    printf("FINE=%f\n",f);
}
float fine(int d)
{
    float f;
    if(d<0)
    {
        printf("Invalid input");
        exit(0);
    }
    else if(d<=5)
    {
        f=d*0.5;
    }
    else if(d>5&&d<=10)
    {
        f=2.5+(d-5)*1;
    }
    else
    {
        f=2.5+5+(d-10)*5;
    }
    return f;
}
