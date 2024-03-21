#include<stdio.h>
main()
{
    FILE *ptr;
    ptr=fopen("calculator.txt","w");
    int n;
    if(ptr==NULL)
    {
        printf("Error in the file opening\n");
        return 1;
    }
    int a,b,s;
    char ch;
    printf("Enter the 2 numbers\n");
    scanf("%d%d",&a,&b);
    printf("Enter the symbol of operation\n");
    scanf("%*c%c",&ch);
    switch(ch)
    {
        case'+': s=a+b;
                 break;
        case'-': s=a-b;
                 break;
        case'*': s=a*b;
                 break;
        case'/': if(b!=0)
                  s=a/b;
                  else
                  {
                      fprintf(ptr,"Inalid\n");
                  }
                  break;
     }
     fprintf(ptr,"Result = %d\n",s);
     fclose(ptr);
     printf("The result is stored in calculator file\n");
}

