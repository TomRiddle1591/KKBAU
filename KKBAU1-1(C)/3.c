/*[while] Print all the alphabet

#include<stdio.h>

int main(void)
{
    printf("Here are the Alphabets: ");

    char abc = 'A';
    while (abc == 'A' && abc >= 'Z')
    {
        printf("%c ", abc);
        abc++;
    }
return 0;
}*/

#include <stdio.h>

int main(void)
{
    printf("Here are the Alphabets: ");

    char abc = 'A';
    while (abc <= 'Z')  // Loop from 'A' to 'Z'
    {
        printf("%c ", abc);
        abc++;
    }

    return 0;
}
