/*Enter a Number print it in words*/

/*#include<stdio.h>

int main(void)
{
    int num;
    printf("Enter a Digit: ");
    scanf("%d", &num);

    switch(num)
    {
        case 0:
            printf("You Entered \"ZERO\"\n");
            break;
        case 1:
            printf("You Entered \"ONE\"\n");
            break;
        case 2:
            printf("You Entered \"TWO\"\n");
            break;
        case 3:
            printf("You Entered \"THREE\"\n");
            break;
        case 4:
            printf("You Entered \"FOUR\"\n");
            break;
        case 5:
            printf("You Entered \"FIVE\"\n");
            break;
        case 6:
            printf("You Entered \"SIX\"\n");
            break;
        case 7:
            printf("You Entered \"SEVEN\"\n");
            break;
        case 8:
            printf("You Entered \"EIGHT\"\n");
            break;
        case 9:
            printf("You Entered \"NINE\"\n");
            break;
        default:
            printf("Invalid Input.\n");
    }
return 0;
}*/


#include<stdio.h>

int main(void)
{
    int num, oNum, rem = 0, rev = 0;

    printf("Enter Number: ");
    scanf("%d", &num);

    oNum = num;
    while(num != 0)
    {
        rev = (rev * 10) + (num % 10);
        num = num / 10;
    }
    while(rev != 0)
    {
        rem = rev % 10;

        switch(rem)
    {
        case 0:
            printf("ZERO ");
            break;
        case 1:
            printf("ONE ");
            break;
        case 2:
            printf("TWO ");
            break;
        case 3:
            printf("THREE ");
            break;
        case 4:
            printf("FOUR ");
            break;
        case 5:
            printf("FIVE ");
            break;
        case 6:
            printf("SIX ");
            break;
        case 7:
            printf("SEVEN ");
            break;
        case 8:
            printf("EIGHT ");
            break;
        case 9:
            printf("NINE ");
            break;
        default:
            printf("Invalid Input.\n");
    }
    rev = rev / 10;
    }

return 0;
}