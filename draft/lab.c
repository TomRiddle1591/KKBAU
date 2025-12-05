//simple calculator [switch, while, UD-function]

/*#include <stdio.h>

void Add(float x, float y);
void Sub(float p, float q);
void Mul(float r, float s);
void Div(float m, float n);


int main(void)
{
    float a, b;
    printf("Enter First Number: ");
    scanf("%f", &a);
    printf("Enter Last Number: ");
    scanf("%f", &b);

    int choice = 0;
    printf("Enter 1 for Addition\nEnter 2 for Subtraction\nEnter 3 for Multiplication\nEnter 4 for Division\n");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            Add(a,b);
            break;
        case 2:
            Sub(a,b);
            break;
        case 3:
            Mul(a,b);
            break;
        case 4:
            Div(a,b);
            break;
        default:
            printf("Invalid Input\n");
    }
return 0;
}

void Add(float x, float y)
{
    printf("Performing Addition\n");
    printf("%.2f + %.2f = %.2f\n", x, y , x + y);
}

void Sub(float p, float q)
{
    printf("Performing Subtraction\n");
    printf("%.2f - %.2f = %.2f\n", p, q, p - q);
}

void Mul(float r, float s)
{
    printf("Performing Multiplication\n");
    printf("%.2f * %.2f = %.2f\n", r, s, r * s);
}

void Div(float m, float n)
{
    printf("Performing Division\n");
    if(n == 0)
    {
        while(n == 0)
        {
            printf("Enter Last Number again: ");
            scanf("%f", &n);
        }
    }
    printf("Division: ");
    printf("%.2f / %.2f = %.2f\n", m, n, m / n);
}
*/


//finding e^x

#include<stdio.h>
#include<math.h>

int main(void)
{
    float nN, num, x, fact = 0;
    printf("Enter Number: ");
    scanf("%f", &num);
    do{
        printf("Enter Power: ");
        scanf("%f", &x);
    }
    while(x < 0);
    
    nN = pow(num, x);
    printf("%.2f\n", nN);
return 0;
}