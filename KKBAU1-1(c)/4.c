/*[while] print even 1 - 100*/

#include<stdio.h>

int main(void)
{
    printf("All the Even numbers 1 to 100:\n");

    int num = 1;
    while (num <= 100)
    {
        if (num % 2 == 0)
        {
            printf("%d ", num);
        }
        num++;
    }
    
return 0;
}