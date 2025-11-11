/*Find the Factorial of a Number*/

#include<stdio.h>

int main(void)
{
    int num, sNum, rNum;
    printf("Enter Number: ");
    scanf("%d", &num);

    rNum = num;//saving the acquired number
    sNum = num;//saving number for iteration
    while(sNum != 1)
    {
        num = num * (sNum - 1);
        sNum--;
    }
    printf("Factorial of %d is: %d\n", rNum, num);
return 0;
}