#include<stdio.h>
int reverse(int);
main()
{
    FILE *ptr;
    ptr=fopen("reverse.txt","w");
    int n,res;
    if(ptr==NULL)
    {
        printf("Error in the file opening\n");
        return 1;
    }
    printf("Enter the number\n");
    scanf("%d",&n);
    if(n>0)
    res=reverse(n);
    fprintf(ptr,"Number after reversing = %d",res);
    fclose(ptr);
    printf("The reult is stored in reverse file\n");
}
int reverse(int n)
{
    int ld,res=0;
    while(n!=0)
    {
        ld=n%10;
        res=res*10+ld;
        n=n/10;
    }
    return res;
}
