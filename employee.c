#include<stdio.h>
struct emp
{
    char emp_id[20];
    char name[20];
    float b_p;
    float ded;
    float allw;
};
void read(struct emp[],int);
void display(struct emp[],int);
void netpay(struct emp[],int);
main()
{
   struct emp e[500];
   int n;
   printf("Enter the number of empls\n");
   scanf("%d",&n);
   read(e,n);
   display(e,n);
   netpay(e,n);
}
void read(struct emp e[500],int n)
{
  int i;
  for(i=0;i<n;i++)
  {
      printf("Enter the emply id\n");
      scanf("%s",e[i].emp_id);
      printf("Enter the emply name\n");
      scanf("%s",e[i].name);
      printf("Enter the basic pay\n");
      scanf("%f",&e[i].b_p);
      printf("Enter the deduction\n");
      scanf("%f",&e[i].ded);
      printf("Enter the allowance\n");
      scanf("%f",&e[i].allw);
  }
}
void display(struct emp e[500],int n)
{
    int i;
    for(i=0;i<n;i++)
   {
     printf("\nEmployee id:%s",e[i].emp_id);
     printf("\nname:%s",e[i].name);
     printf("\nbasicpay:%f",e[i].b_p);
     printf("\ndeduction:%f",e[i].ded);
     printf("\nallowance:%f",e[i].allw);
   }
}
void netpay(struct emp e[500],int n)
{
   int i;
   float np;
   for(i=0;i<n;i++)
   {
      np= e[i].b_p + e[i].allw - e[i].ded;
      printf("\nNet pay %d = %f\n",n,np);
   }
}
