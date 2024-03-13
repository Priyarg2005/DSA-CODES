#include<stdio.h>
int bintodec(int );
main()
{
    int n,d;
    printf("Enter the number\n");
    scanf("%d",&n);
    d=bintodec(n);
    printf("Decimal=%d\n",d);
}
int bintodec(int n)
{
    int i=1,sum=0,ld;
    while(n!=0)
    {
        ld=n%10;
        n=n/10;
        sum=sum+(ld*i);
        i=i*2;
    }
    return sum;
}
