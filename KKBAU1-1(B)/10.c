/*10. Check whether the alpahbet is upper or lower*/
#include<stdio.h>
int main(void)
{
    char ch;
    printf("Enter any Word: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("The wrod \"%c\" is in Lowercase.\n", ch);
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("The word \"%c\" is in Uppercase.\n", ch);
    }
    else
    {
        printf("Invalid!\n");
    }
    
return 0;
}