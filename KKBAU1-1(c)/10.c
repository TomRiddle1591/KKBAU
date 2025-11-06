/*[while] count the number of digits in a number*/

#include<stdio.h>

int main(void)
{
    int count = 0, num, n_Num;
    printf("Enter your Number: ");
    scanf("%d", &num);

    n_Num = num;
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    
    printf("There are %d digits in %d.\n", count, n_Num);
return 0;
}