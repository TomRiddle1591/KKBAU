/*[while] print the reverse number after taking input*/

#include<stdio.h>

int main(void)
{
    int num, count = 0, rem;
    printf("Enter the Number: ");
    scanf("%d", &num);

    printf("The reverse of %d is: ", num);
    while(num != 0)
    {
        rem = num % 10;
        num = num / 10;
        printf("%d", rem);
    }
    printf("\n");
return 0;
}