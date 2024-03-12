#include<stdio.h>
void read(int[100][100],int,int);
void display(int [100][100],int,int);
void sum(int[100][100],int[100][100],int,int);
main()
{
    int a[100][100];
    int b[100][100],r,c;
    printf("Enter thr values of r and c\n");
    scanf("%d",&r);
    scanf("%d",&c);
    read(a,r,c);
    printf("Enter thr values of r and c\n");
    scanf("%d",&r);
    scanf("%d",&c);
    read(b,r,c);
    display(a,r,c);
    display(b,r,c);
    sum(a,b,r,c);
}
void read(int a[100][100],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
}
void display(int a[100][100],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
void sum(int a[100][100],int b[100][100],int r,int c)
{
    int i,j;
    int d[100][100];
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            d[j][i]=a[j][i]+b[j][i];
        }
        printf("\n");
    }
    display(d,r,c);
}
