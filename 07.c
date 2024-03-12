#include<stdio.h>
void read(int [],int);
void display(int [],int);
void rotate(int [],int, int);
main()
{
    int n,a[100],k;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    read(a,n);
    display(a,n);
    printf("\n");
    printf("Enter the value of k\n");
    scanf("%d",&k);
    rotate(a,n,k);
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
        printf("%d ",a[i]);
    }
}
void rotate(int a[100],int n, int k)
{
    int j,i,temp;
   for(i=1;i<=k;i++)
    {
        temp=a[0];
       for(j=0;j<n;j++)
      {
        a[j]=a[j+1];
      }
      a[n-1]=temp;
    }
   display(a,n);
}

