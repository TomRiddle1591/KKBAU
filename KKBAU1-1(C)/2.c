/*[while] print natural number but in reverse*/

#include<stdio.h>

int main(void)
{
    printf("Printing natural number in reverse\n");

    printf("Here are the Numbers: ");
    int num = 100;
    while (num >= 1)
    {
        printf("%d ", num);
        num--;
    }
    
return 0;
}