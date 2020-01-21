#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    int c;
    char mystring = ":)LOOOOL";
    FILE *file;
    file = fopen("C://Users/Kungen/Desktop/Skol_C/V.49_ReplaceFile/lol.txt", "r");
    if (c = getc(file) == '.') 
        fprintf(file, "%s", mystring);
    {
        while ((c = getc(file)) != EOF)
            putchar(c);

        fclose(file);
    }

    return 0;
}
