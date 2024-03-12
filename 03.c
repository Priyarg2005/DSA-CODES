#include<stdio.h>
int arm(int);
main()
{
    int n,res;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    res=arm(n);
    if(res==n)
    {
        printf("ARMSTRONG NUMBER\n");
    }
    else
    {
        printf("NOT AN ARMSTRONG NUMBER\n");
    }
}
int arm(int n)
{
    int i,ld,s=0;
    while(n!=0)
    {
        ld=n%10;
        s=s+(ld*ld*ld);
        n=n/10;
    }
   return s;
}

