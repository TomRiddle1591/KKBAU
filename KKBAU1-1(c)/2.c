/*[while] print natural numbers but in reverse*/

#include<stdio.h>

int main(void)
{
    printf("Here are the numbers: ");

    int num = 100;
    while (num >= 1)
    {
        printf("%d ", num);
        num--;
    }
    
return 0;
}