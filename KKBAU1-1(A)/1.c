/*Static*/


/*#include<stdio.h>
int main(void)
{
    int a = 5, b = 6;
    printf("Addition: %d + %d = %d\n", a, b, a+b);
return 0;
}*/

/*#include<stdio.h>
int main(void)
{
    int a = 10, b = 6;
    printf("Subtraction: %d - %d = %d\n", a, b, a-b);
return 0;
}*/

/*#include<stdio.h>
int main(void)
{
    float a = 5.6, b = 9.6;
//%.2f means 2digits after the integer
    printf("Multiplication: %.2f * %.2f = %.2f\n", a, b, a*b);
return 0;
}*/

/*#include<stdio.h>
int main(void)
{
    float a = 5.6, b = 9.6;
    printf("Division: %.2f / %.2f = %.2f\n", a, b, a/b);
return 0;
}*/


/*Dynamic*/

/*#include<stdio.h>
int main(void)
{
    int a, b, result = 0;
//assigning a value to result makes the variable clear out garbage value

    printf("Enter A: ");
    scanf("%d", &a);
    printf("Enter B: ");
    scanf("%d", &b);

    result = a + b;

    printf("Addition: %d + %d = %d\n", a, b, result);
return 0;
}*/

/*#include<stdio.h>
int main(void)
{
    int a, b, result = 0;

    printf("Enter A: ");
    scanf("%d", &a);
    printf("Enter B: ");
    scanf("%d", &b);

    result = a - b;

    printf("Subtraction: %d - %d = %d\n", a, b, result);
return 0;
}*/

/*#include<stdio.h>
int main(void)
{
    int a, b, result = 0;

    printf("Enter A: ");
    scanf("%d", &a);
    printf("Enter B: ");
    scanf("%d", &b);

    result = a * b;

    printf("Multiplication: %d * %d = %d\n", a, b, result);
return 0;
}*/

/*#include<stdio.h>
int main(void)
{
    float a, b, result = 0;

    printf("Enter A: ");
    scanf("%f", &a);
    printf("Enter B: ");
    scanf("%f", &b);

    result = a / b;

    printf("Division: %.2f / %.2f = %.2f\n", a, b, result);
return 0;
}*/


/*Other*/
#include<stdio.h>
int main(void)
{
    int n;
    float sum = 0, average;

    printf("Enter the number of values: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        float value;
        printf("Enter value %d: ", i + 1);
        scanf("%f", &value);
        sum += value;
    }

    average = sum / n;
    printf("Average = %.2f\n", average);
return 0;
}