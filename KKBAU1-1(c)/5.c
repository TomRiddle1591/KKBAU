/*[while] print odd 1 - 100*/

#include<stdio.h>

int main(void)
{
    printf("Here are the Odd number 1 to 100:\n");

    int num = 1;
    while (num <= 100)
    {
        if (num % 2 != 0)
        {
            printf("%d ", num);
        }
        num++;
    }
    
return 0;
}