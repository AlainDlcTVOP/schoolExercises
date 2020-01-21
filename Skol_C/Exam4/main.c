#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*a and b are ”string”-variables, defined like this:
char a[100];
char b[100];
strcpy(a,"MyWordA");
strcpy(b,"MyWordB");
write the needed code to exchange of the content in these two variables.*/

int main()
{
    char a[100];
    char b[100];

    memset(a, '\0', sizeof(a));
    memset(b, '\0', sizeof(b));

    strcpy(a, "MyWordA\n");
    strcpy(b, "MyWordB\n");
    strcpy(a, b);
    printf("%s", a);
    strcpy(a, "MyWordA\n");
    strcpy(b, "MyWordB\n");
    strcpy(b, a);
    printf("%s", b);

    return 0;
}
