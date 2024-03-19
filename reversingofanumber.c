#include<stdio.h>
int rev(int);
main()
{
    int n,res;
    printf("Enter the number\n");
    scanf("%d",&n);
    if(n>0)
    {
        res=rev(n);
        printf("Reversed number = %d\n",res);
    }
    else
    {
        printf("Invalid\n");
    }

}
int rev(int n)
{
    int ld,rev=0;
    while(n!=0)
    {
        ld=n%10;
        rev=rev*10+ld;
        n=n/10;
    }
    return rev;
}

