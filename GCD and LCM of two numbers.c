#include<stdio.h>
int gcd(int,int);
int lcm(int,int,int);
main()
{
    int a,b,g,l;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    g=gcd(a,b);
    l=lcm(a,b,g);
    printf("GCD=%d\nLCM=%d\n",g,l);
}
int gcd(int a,int b)
{
    int r=0;
    while(a!=0)
    {
        r=b%a;
        b=a;
        a=r;
    }
    return b;
}
int lcm(int a,int b,int g)
{
    int l;
    l=a*b/g;
    return l;
}
