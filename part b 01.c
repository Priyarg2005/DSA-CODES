#include<stdio.h>
int fact(int);
main()
{
   int n,f;
   printf("Enter the number\n");
   scanf("%d",&n);
   if(n>0)
   {
       f=fact(n);
   }
   printf("Factorial of %d = %d\n",n,f);
}
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
       f=f*i;
    }
    return f;
}
