#include<stdio.h>
#include<string.h>
void read(char []);
void display(char []);
void merge(char [],char []);
main()
{
    char s1[100],s2[100];
    printf("Enter the first string\n");
    read(s1);
    printf("Enter the second string\n");
    read(s2);
    display(s1);
    display(s2);
    merge(s1,s2);
}
void read(char s[100])
{
    gets(s);
}
void display(char s[100])
{
    puts(s);
}
void merge(char s1[100],char s2[100])
{
    char s[100];
    int i,j,l1,l2;
    l1=strlen(s1);
    l2=strlen(s2);
    for(i=0;s1[i]!='\0';i++);
    {
        for(j=0;s2[j]!='\0';j++,i++)
        {
            s1[i]=s2[j];
        }
    }
    s1[i]='\0';
    display(s1);
}
