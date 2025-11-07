#include<stdio.h>

int main(void)
{
    int A[10], i, sum = 0;

    printf("Enter values: ");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &A[i]);
    }

    for(i = 0; i < 10; i++)
    {
        sum+=A[i];
    }

    printf("Sum of the values: %d\n", sum);;
return 0;
}