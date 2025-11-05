/*[while] print sum of natural numbers 1-100*/

#include<stdio.h>

int main(void)
{
    printf("Here is the sum of numbers 1 to 100: ");

    int sum = 0, num = 0;
    while (num <= 100)
    {
        sum+=num;
        num++;
    }
    
    printf("%d", sum);
return 0;
}