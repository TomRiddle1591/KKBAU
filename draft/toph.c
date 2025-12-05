#include<stdio.h>

int main(void)
{
    char num[10];
    double A = 0;
    scanf("%lf", &A);

    num[10] = A;
    printf("%s\n", num);
return 0;
}