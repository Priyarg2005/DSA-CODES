#include<stdio.h>
int count(int);
main()
{
    int n,c;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    c=count(n);
    printf("Count=%d\n",c);
}
int count(int n)
{
    int c=0;
    while(n!=0)
    {
        n=n%2;
        if(n==1)
        {
            c++;
        }
    }
    return c;
}
