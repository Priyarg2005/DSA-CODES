#include<stdio.h>
int main()
{

    FILE *ptr;
    ptr=fopen("hellow.txt","w");

   if(ptr==NULL)
    {
        printf("Error in the file opening\n");
        return 1;
    }
    fprintf(ptr,"Hello, World!");
    fclose(ptr);
    printf("The result is stored in 'hellow.txt file\n");

}
