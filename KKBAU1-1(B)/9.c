/*9. To check input is alphabet, digit or special character*/
#include<stdio.h>
int main(void)
{
    char ch;
    printf("Enter anything from the keyboard: ");
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("\"%c\" is a Character.\n", ch);
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("\"%c\" is a digit.\n", ch);
    }
    else
    {
        printf("The \"%c\" is either special character or invalid\n");
    }

return 0;
}