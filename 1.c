/*[while] print natural numbers 1 to n*/

#include<stdio.h>

int main(void)
{
    printf("Here are the numbers: ");

    int num = 1;
    while (num < 101)
    {
        printf("%d ", num);
        num++;
    }
    
return 0;
}