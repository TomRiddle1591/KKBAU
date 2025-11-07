/*[while] print sum of even numbers*/

#include<stdio.h>

int main(void)
{
    printf("Sum of even numbers between 1 to 100: ");

    int sum = 0, num = 1;
    while (num <= 100)
    {
        if (num % 2 == 0)
        {
            sum+=num;
        }
        num++;
    }
    printf("%d\n", sum);
return 0;
}