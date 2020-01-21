#include <stdio.h>
#include <stdlib.h>
char *s1 = "Emilia";
char *s2 = "Roger";
int main()
{
    
    
    printf("Kul med pekare\n");
    char **pp, *p = s1;
    pp = &p;
    printf("p = %s\n", p);
    printf("*pp = %s\n", *pp);

    *pp = s2;
    printf("p = %c\n", p[0]);
    printf("p=%s\n", p);

    **pp = 'j';
    *(*pp + 2) = 'k';

    printf("%s\n", p);
}
