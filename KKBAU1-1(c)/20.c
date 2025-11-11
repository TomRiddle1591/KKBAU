/*[while] print all ASCII character with their values*/

#include<stdio.h>

int main(void)
{
    int dec = 0;
    while(dec < 255)
    {
        printf("ASCII value of character %c is %d\n", dec, dec);
        dec++;
    }
return 0;
}