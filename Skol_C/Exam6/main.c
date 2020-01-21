#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Person
{
    int age;
    char nickname[10];
} Person;

Person *allocStruct(int age,char nickname[10]) {
Person *p=malloc(sizeof(Person));
p->age=age;
strcpy(p->nickname,nickname);
return p;
}

int main()
{
    Person *p=allocStruct(38,"Kungen");
    
    printf("This is my name %s and age %d",p->nickname, p->age);
}