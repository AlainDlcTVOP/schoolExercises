#include <stdio.h>
#include <string.h>

void printBinary(unsigned char byte);
void printDecimal(char str[]);
int main(int argc, char const *argv[])
{

    /* Binary
    unsigned char byte = 45;
    printBinary(byte);
    */

   // Decimal

   char str[] = "00001001";
   printf("%d",str);

    return 0;
}
void printBinary(unsigned char byte)
{
    for (int i = 7; i >= 0; i--)
    {
        int bit = (byte >> i) & 0x01;
        printf("%d", bit);
    }
}
void printDecimal(char str[])
{
    unsigned char byte = 0;
    for (int i = 0; i < 8; i++)
    {
        if (str[i] == '1')
            byte |= (1 << (7 - i));
    }
    printf("Decimal &d", byte);
}
