#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern int Shiftarray;
extern int Sensorvalue(void);
extern int ShiftIt(int n, int val);
struct value
{
    int Origvalue;
    int Newvalue;
};

int main()
{
    struct value *org, Origvalue;
    struct value *new, Newvalue;

     org = (struct value*) malloc(sizeof(struct value) * 10);
     new = (struct value*) malloc(sizeof(struct value) * 10);

    
    

    Sensorvalue();
    ShiftIt(1, 1);

    return 0;
}
int Sensorvalue(void)
{
    int Shiftarray;
    int i, n;
    time_t t;

    n = Shiftarray;

    srand((unsigned)time(&t));

    for (i = 0; i < 10; i++)
    {
        printf("%d\n", rand() % 10);
    }
}
int ShiftIt(int n, int val)
{

    for (val = 0; val < 10; val++)
    {
        if (n % 2 == 0)
            printf("Even\n");
        else

            printf("Odd\n");
    }
}
