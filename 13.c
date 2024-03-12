#include<stdio.h>
void read(int [100][100],int,int);
void display(int [100][100],int,int);
void upper(int [100][100],int,int);
main()
{
    int a[100][100],r,c;
    printf("Enter the value of c  and r\n");
    scanf("%d%d",&r,&c);
    read(a,r,c);
    display(a,r,c);
    upper(a,r,c);
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
void upper(int a[100][100],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i+j<c-1)
            {
                printf("\n%d\t",a[i][j]);
            }
        }
    }
}
