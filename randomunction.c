#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    // declare the local variables
    int i, num;
    printf (" Program to get the random number from 1 to 50 \n");
    for (i = 1; i <= 10; i++)
    {
        num = rand()%50; // use rand() function to get the random number
        printf (" %d ", num);

    }
}
