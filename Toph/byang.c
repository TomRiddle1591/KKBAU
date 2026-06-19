#include <stdio.h>

void byang(int first, int two);

int main(void)
{
    int Xx, Yy;
    printf("Enter two Numbers: ");
    scanf("%d%d", &Xx, &Yy);

    byang(Xx, Yy);

    return 0;
}


void byang(int first, int two)
{
    
    printf("%d %d\nTwo Numbers\n", first, two);
}