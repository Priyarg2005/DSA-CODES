 #include<stdio.h>
 #include<string.h>
 void read(char[]);
 void display(char[]);
 int str_cmp(char [],char[]);
 main()
 {
     char s1[100],s2[100];
     int x;
     printf("Enter the first string\n");
     read(s1);
     printf("Enter the second string\n");
     read(s2);
     display(s1);
     display(s2);
     x=str_cmp(s1,s2);
     if(x==0)
     {
        printf("s1 and s2 are same\n");
     }
     else
     {
        printf("s1 and s2 are not same\n");
     }
}
void read(char s1[100])
{
    gets(s1);
}
void display(char s1[100])
{
    puts(s1);
}
int str_cmp(char s1[100],char s2[100])
{
    int l1,l2,i=0;
    l1=strlen(s1);
    l2=strlen(s2);
    if(l1==l2)
    {
        while(s1[i]!='\0'||s2[i]!='\0')
        {
            if(s1[i]!=s2[i])
            {
                return 1;
            }
            i++;
        }
        return 0;
    }
    else
    {
        return 1;
    }
}

