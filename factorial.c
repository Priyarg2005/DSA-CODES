#include<stdio.h>
int fact(int);
int main()
{
    FILE *ptr;
    ptr=fopen("factorial.txt","w");
    int n,f;
    if(ptr==NULL)
    {
        printf("Error in the file opening\n");
        return 1;
    }
    printf("Enter the number\n");
    scanf("%d",&n);
    if(n>0)
    f=fact(n);
    fprintf(ptr,"Factorial = %d",f);
    fclose(ptr);
    printf("The reult is stored in factorial file\n");
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
