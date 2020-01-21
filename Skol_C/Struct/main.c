#include <stdio.h>
#include <stdlib.h>
struct Car
{
    int age;
};
void CompareAge(struct Car first, struct Car secund);
int main()
{

    /*Create and initilize a pointer to above structCar. Assign value 100 to age for this pointer.Printit outout (the age).*/
    struct Car *ptrcar = malloc(sizeof(struct Car));
    ptrcar->age = 100;
    struct Car car1;
    struct Car car2;
    car1.age = 25;
    car2.age = 27;
    printf("ptrcar=%d\n", *ptrcar);
    CompareAge(car1, car2);
    return 0;
}

/*Createa function that takestwo arguments of type struct Car. And call on the function 
from main with the above two instances.
The function should print out ”Stor skillnad”if the age difference is equal or larger than 30 otherwise “liten skillnad”*/
void CompareAge(struct Car first, struct Car secund)
{
    if ((first.age - secund.age) < 30)
    {
        printf("liten skillnad");
    }
    else
    {
        printf("Stor skillnad");
    }
}
