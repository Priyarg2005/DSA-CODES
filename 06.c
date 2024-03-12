#include<stdio.h>
void read(int [],int);
void display(int [],int);
void reverse(int [],int);
main()
{
    int a[100],n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    read(a,n);
    display(a,n);
    printf("\n");
    reverse(a,n);
    display(a,n);
}
void read(int a[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display(int a[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
void reverse(int a[100],int n)
{
    int i,j,t;
    for(i=0,j=n-1;i<j;i++,j--)
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
}
