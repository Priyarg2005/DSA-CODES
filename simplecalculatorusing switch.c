#include<stdio.h>
main()
{
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
        case'/':s=a/b;
                 break;
     }
     printf("S=%d\n",s);
}
