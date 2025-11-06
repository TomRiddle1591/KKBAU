/*[while] multiplication table of any number*/

#include<stdio.h>

int main(void)
{

    int num, t = 1;
    printf("Enter the number of Multiplication Table: ");
    scanf("%d", &num);

    printf("\nMultiplication Table of %d:\n", num);
    while (t <= 10)
    {
        printf("%d * %d = %d\n", num, t, num * t);
        t++;
    }
return 0;
}