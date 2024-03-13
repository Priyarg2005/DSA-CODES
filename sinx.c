#include<stdio.h>
float sinx(float);
main()
{
    float x,s;
    printf("Enter the value of x\n");
    scanf("%f",&x);
    s=sinx(x);
    printf("sin(%f)=%f",x,s);
}
float sinx(float x)
{
    int i=1;
    float term,fact=1,sign=1,sum=0,prve=0;
    x=(x*3.142)/180;
    while(1)
    {
        prve=sum;
        term=pow(x,i)/fact;
        sum=sum+(term*sign);
        fact=fact*(i+1)*(i+2);
        i=i+2;
        sign=sign*(-1);
        if(fabs(sum-prve)<0.001)
        break;
    }
    return sum;
}
