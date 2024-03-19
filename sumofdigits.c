#include<stdio.h>
int sum(int);
main()
{
    int n,res;
    printf("Enter the number\n");
    scanf("%d",&n);
    if(n>0)
    {
        res=sum(n);
        printf("SUM=%d\n",res);
    }
    else
    {
        printf("Invalid\n");
    }

}
int sum(int n)
{
    int ld,s=0;
    while(n!=0)
    {
        ld=n%10;
        s=s+ld;
        n=n/10;
    }
    return s;
}
