#include<stdio.h>
void read(int[],int);
void display(int[],int);
int max(int[],int);
int min(int[],int);
main()
{
    int n;
    int m[100],maxm,minm;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    read(m,n);
    display(m,n);
    maxm=max(m,n);
    printf("\nMAX=%d\n",maxm);
    minm=min(m,n);
    printf("MIN=%d\n",minm);

}
void read(int m[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&m[i]);
    }
}
void display(int m[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",m[i]);
    }
}
int max(int m[100],int n)
{
    int i;
    int r;
    r=m[1];
    for(i=0;i<n;i++)
    {
        if(r<m[i])
        {
            r=m[i];
        }
    }
    return r;
}
int min(int m[100],int n)
{
    int i;
    int r;
    r=m[1];
    for(i=0;i<n;i++)
    {
        if(r>m[i])
        {
            r=m[i];
        }
    }
    return r;
}

