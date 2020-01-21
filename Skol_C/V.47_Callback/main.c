#include <stdio.h>

// Call back function

void funcA();
void funcB(void(*pFunc()));
int main(int argc, char const *argv[])
{
    printf("Lets start...\n");
    void (*pFunc)() = &funcA;

    // Calling a function with callback funktion as argument
   
  
    funcB(pFunc);
    return 0;
}

void funcA()
{
    printf("This is function A");
}
void funcB(void(*pFunc()))
{
    printf("B is calling .....\n");
    (*pFunc)(); // callback to A
}
