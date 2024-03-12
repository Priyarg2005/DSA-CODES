#include<stdio.h>
int pal(int);
main()
{
    int n,res;
    printf("Enter an integer number\n");
    scanf("%d",&n);
    res=pal(n);
    if(res==n)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a palindrome\n");
    }
}
int pal(int n)
{
    int ld,s=0;
    while(n!=0)
    {
        ld=n%10;
        s=s*10+ld;
        n=n/10;
    }
    return s;
}
