#include<stdio.h>
main()
{
    char str[100];
    int i;
    printf("Enter the string\n");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        str[i]=toupper(str[i]);
    }
    printf("%s\n",str);
}
