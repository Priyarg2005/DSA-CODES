#include<stdio.h>
float sum(int);
main()
{
    int n;
    float s;
    printf("enter the value of n \n");
    scanf("%d",&n);
    s=sum(n);
    printf("SUM=%f\n",s);

}
float sum(int n)
{
    float s;
    int i,fact =1;
    for(i=1,s=0;i<=n;i++)
    {
        fact=fact*i;
        s=s+(1/fact);
    }
    return s;
}
