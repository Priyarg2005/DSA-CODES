#include<stdio.h>
int pal(int n);
main()
{
    FILE *ptr;
    ptr=fopen("palindrome.txt","w");
    int n,s=0;
    if(ptr==NULL)
    {
        printf("Error in the file opening\n");
        return 1;
    }
    printf("Enter the number\n");
    scanf("%d",&n);
    if(n>0)
    {
        s=pal(n);
    }
    if(s==n)
    {
        fprintf(ptr,"The given number is a Palindrome number\n");
    }
    else
    {
        fprintf(ptr,"The number is not a palindrome number\n");
    }
    fclose(ptr);
    printf("The reult is stored in palindrome file\n");
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
