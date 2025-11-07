/*[while] print product of digits of a number*/

#include<stdio.h>

int main(void)
{
    int pro = 0, num, n_Num, rem;
    printf("Enter your Number: ");
    scanf("%d", &num);

    n_Num = num;
    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;
        pro*=rem;
    }

    printf("Product of Digits: %d\n", pro);
return 0;
}