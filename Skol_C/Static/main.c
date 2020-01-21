#include <stdio.h>

void YaWich();
int main()
{
    YaWich();
    YaWich();
    YaWich();
    YaWich();
    YaWich();
    return 0;
}
void YaWich()
{
    static int myvar = 1;
    if ((myvar == 1))
    {
        printf("God jul önskar YH");
    }
    myvar++;
}
