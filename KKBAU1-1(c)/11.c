/*[while] print first and last digit of a number*/

#include<stdio.h>

int main(void)
{
    int num, n_Num, last, first, count = 0, rem, X;
    printf("Enter your Number: ");
    scanf("%d", &num);
    printf("How many Digits are in your number? ");
    scanf("%d", &X);

    n_Num = num;
    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;
        count++;
        if (count == 1)
        {
            last = rem;
        }
        else if (count == X)
        {
            first = rem;
        }
        
    }
    if (count == X)
    {
        printf("The first digit is %d and last digit is %d\n", first, last);
    }
    else
    {
        printf("The number of digits you entered is incorrect!\n");
    }
    
    
return 0;
}