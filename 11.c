#include<stdio.h>
void read(int [100][100],int,int);
void display(int [100][100],int,int);
void transpose(int [100][100],int,int);
main()
{
    int a[100][100],r,c;
    printf("Enter the value of c  and r\n");
    scanf("%d%d",&r,&c);
    read(a,r,c);
    display(a,r,c);
    transpose(a,r,c);
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
    printf("\n");
}
void transpose(int a[100][100],int r,int c)
{
    int i,j,t[100][100];
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
       {
          t[i][j]=a[j][i];
       }
    }
    display(t,r,c);
}





