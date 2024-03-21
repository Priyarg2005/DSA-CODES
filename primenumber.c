#include<stdio.h>
int isprime(int);
main()
{
    FILE *ptr;
    int n,res;
    ptr=fopen("prime.txt","w");
    if(ptr==NULL)
    {
        printf("Error in the file opening\n");
        return 1;N
    }
    printf("enter the value of n\n");
    scanf("%d",&n);
     if(n>0)
    res=isprime(n);
        if(res==0)
            fprintf(ptr," %d is Not prime number\n",n);
        else
            fprintf(ptr," %d is Prime number\n",n);
    fclose(ptr);
    printf("The result is stored in prime file\n");
}
int isprime(int n)
{
    int i,flag=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        return 1;
    else
        return 0;
}
