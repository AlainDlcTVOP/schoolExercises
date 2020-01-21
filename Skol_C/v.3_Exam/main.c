#include <stdio.h>
#include <stdlib.h>
/*
Write a program that reads real number
(stored internally as floating point)
from the default input.
The program should end when the number 0 is entered,
and then print the average of the entered languages ​​except the highest and lowest(and the closing zero).
For simplicity, we can assume that all input numbers will be different, and that the input consists of at least three numbers*/
double average(int a, int b, int c);
int main()
{
    double n1, n2, n3;
    char kill;
    double avg;
    puts("Exit the program type 0");
    printf("Enter three different numbers:\n ");

    kill = getchar();

    if (kill == '0')
    {
        puts("Exit");
        exit(0);
    }
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if (n1 >= n2 && n1 >= n3)
        printf("%.2f is the max number\n", n1);
    if (n2 >= n1 && n2 >= n3)
        printf("%.2f is the max number\n", n2);
    if (n3 >= n1 && n3 >= n2)
        printf("%.2f is the max number\n", n3);
    if (n1 <= n2 && n1 <= n3)
        printf("%.2f is the min number\n", n1);
    if (n2 <= n1 && n2 <= n3)
        printf("%.2f is the min number\n", n2);
    if (n3 <= n1 && n3 <= n2)
        printf("%.2f is the min number\n", n3);

    avg = average(n1, n2, n3);
    printf("Avrage of the sum %2.f", n1, n2, n3, average);

    return 0;
}
double average(int a, int b, int c)
{
    return (float)(a + b + c) / 2;
}