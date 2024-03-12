#include<stdio.h>
void read(int [100][100],int,int);
void display(int [100][100],int,int);
void sum(int [100][100],int,int);
main()
{
    int a[100][100],r,c;
    printf("Enter the value of c  and r\n");
    scanf("%d%d",&r,&c);
    read(a,r,c);
    display(a,r,c);
    sum(a,r,c);
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
void sum(int a[100][100],int r,int c)
{
    int i,j,s=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i<j)
            {
                s=s+a[i][j];
            }
        }
    }
    printf("SUM=%d\n",s);
}
