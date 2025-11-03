/*8. To Check whether the alphabet is Vowel or not*/
#include <stdio.h>
int main(void)
{
    char ch;
    printf("Enter any word: ");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("The word %c is VOWEL.\n", ch);
        break;
    default:
        printf("The word \"%c\" is either Consonant or Invalid.\n", ch);
        break;
    }
    
return 0;
}