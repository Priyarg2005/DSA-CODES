#include<stdio.h>
void read(int[100][100],int,int);
void display(int [100][100],int,int);
void mul(int [100][100],int[100][100],int,int,int,int);
main()
{
    int a[100][100];
    int b[100][100],r1,c1,r2,c2;
    printf("Enter thr values of r1 and c1\n");
    scanf("%d",&r1);
    scanf("%d",&c1);
    read(a,r1,c1);
    printf("Enter thr values of r2 and c2\n");
    scanf("%d",&r2);
    scanf("%d",&c2);
    read(b,r2,c2);
    display(a,r1,c1);
    display(b,r2,c2);
    mul(a,b,r1,c1,r2,c2);
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
    printf("\n\n");
}
void mul(int a[100][100],int b[100][100],int r1,int c1,int r2,int c2)
{
    int i,j,k;
    int c[100][100];
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            for(k=0;k<r2;k++)
            {
              c[i][j]=a[i][j]*b[i][j]+a[i][k]*b[k][i];
            }
        }
    }
    display(c,r1,c1);
}
