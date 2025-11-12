#include<stdio.h>

int main(void)
{
    int A = 10, *p;
    p = &A;

    printf("A: %d\n", A);
    printf("A address: %p\n", &A);
    printf("Address stored in P: %p\n", p);
    printf("value at address stored in p: %d\n", *p);
return 0;
}