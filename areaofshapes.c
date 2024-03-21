#include<stdio.h>
float rec(float,float);
float tri(float,float);
float cir(float);
main()
{
    FILE *ptr;
    ptr=fopen("area.txt","w");
    int n;
    if(ptr==NULL)
    {
        printf("Error in the file opening\n");
        return 1;
    }
    char ch;
    float res,l,b,r;
    printf("Enter\n R for rectangle\n T for triangle\n C for circle\n");
    scanf("%c",&ch);
    switch(ch)
    {
        case'R': printf("Enter the length and bredth\n");
                 scanf("%f%f",&l,&b);
                 res=rec(l,b);
                 break;
        case'T': printf("Enter the length and bredth\n");
                 scanf("%f%f",&l,&b);
                 res=tri(l,b);
                 break;
        case'C': printf("Enter the radius\n");
                 scanf("%f",&r);
                 res=cir(r);
                 break;
     }
     fprintf(ptr,"Result = %f\n",res);
     fclose(ptr);
     printf("The result is stored in area file\n");
}
float rec(float l,float b)
{
    float res;
    res=l*b;
    return res;
}
float tri(float l,float b)
{
   float res;
   res=0.5*l*b;
   return res;
}
float cir(float r)
{
    float res;
    res=3.142*r*r;
    return res;
}
