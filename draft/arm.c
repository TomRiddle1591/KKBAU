/*to check if number is armstrong or not*/

#include<stdio.h>
#include<math.h>

int main(void)
{
    int num, original, digits = 0, temp, sum = 0;

    printf("Enter a Number: ");
    scanf("%d", &num);
    original = num;

    //counting digits
    temp = num;
    while(temp != 0)
    {
        digits++;
        temp /= 10;
    }

    temp = num;
    while(temp != 0)
    {
        int digit = temp % 10;
        sum = sum + pow(digit, digits);
        temp /= 10;
    }

    if(sum == original)
    {
        printf("%d is an Armstrong Number.\n", original);
    }else printf("%d is not an Armstrong Number.\n", original);
return 0;
}