#include<stdio.h>
#include<string.h>
void read(char[]);
void display(char[]);
int strlength(char[]);
main()
{
    char s1[100];
    int x;
    printf("Enter the string\n");
    read(s1);
    display(s1);
    x=strlength(s1);
    printf("Strlen=%d",x);
}
void read(char s1[100])
{
   gets(s1);
}
void display(char s1[100])
{
    puts(s1);
}
int strlength(char s1[100])
{
    int i=0;
    while(s1[i]!='\0')
    {
        i++;
    }
    return i;
}







