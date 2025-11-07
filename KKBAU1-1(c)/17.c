/*[while] check if the number is a palindrome*/

#include<stdio.h>

int main(void)
{
    int num1, num, rem, rev = 0;
    printf("Enter your Number: ");
    scanf("%d", &num);

    num1 = num;
    while(num != 0)
    {
        rev = (rev * 10) + (num % 10);
        num = num / 10;
    }
    if(rev == num1)
    {
        printf("The Number %d is a Palindrome.\n", num1);
    }else{
        printf("The Number %d is not a Palindromme.\n", num1);
    }
return 0;
}