/*[while] print sum of odd numbers*/

#include<stdio.h>

int main(void)
{
    printf("Sum of odd numbers between 1 to 100: ");

    int sum = 0, num = 1;
    while (num <= 100)
    {
        if (num % 2 != 0)
        {
            sum+=num;
        }
        num++;
    }
    printf("%d", sum);
return 0;
}