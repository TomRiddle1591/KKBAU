/*7. To check whether the character is Alphabet or not*/
#include <stdio.h>
int main(void)
{
    char ch;
    printf("Enter anything from the Keyboard: ");
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("%c is a Character.\n", ch);
    }
    else
    {
        printf("Invalid\n");
    }

return 0;
}