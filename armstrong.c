#include<stdio.h>
#include<math.h>
int main()
{
    FILE *ptr;
    ptr=fopen("armstong.txt","w");
    int num,rem,sum=0;
    if(ptr==NULL)
    {
        fprintf(ptr,"Error in the file opening\n");
        return 1;
    }
    printf("Enter the number\n");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        sum=sum+pow(rem,3);
        num=num/10;
    }
    if(sum==num)
    {
        fprintf(ptr,"The given number is armstrong number\n");
    }
    else
    {
        fprintf(ptr,"The number is not armstrong number\n");
    }
    fclose(ptr);
    printf("The result is stored in 'armstrong.txt file\n");

}
