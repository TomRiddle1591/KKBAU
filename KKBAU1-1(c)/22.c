/*To find all factors of a number*/

#include<stdio.h>

int main(void)
{
    int num, fact = 1, lim;
    printf("Enter any Number: ");
    scanf("%d", &num);

    lim = num;
    printf("Factors of %d are: ", num);
    while(fact <= lim)
    {
        if(num % fact == 0)
        {
            printf("%d ", fact);
            if(fact == lim)
            {
                printf("\n");
            }
        }
    fact++;
    }
return 0;
}