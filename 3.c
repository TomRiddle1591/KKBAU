/*[while] Print all the alphabet*/

#include<stdio.h>

int main(void)
{
    printf("Here are the alphabets: ");

    char abc = 'A';
    while (abc <= 'Z')
    {
        printf("%c ", abc);
        abc++;
    }
    
return 0;
}