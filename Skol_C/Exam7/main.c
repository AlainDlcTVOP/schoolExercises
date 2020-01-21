#include <stdio.h>
# include <string.h>

/*Write a function array_count that takes three (3)
argument, an unsorted array of type double numbers, an integer number that represents
how many items that are in the array and last a number lets call it "magicnum" (of type double).
The function shall return how many times magicnum occurs in the array.*/

double array_count(double a[], int b, char m);

int main()
{

    double count,a[] = {1.2, 2.4, 7.1, 8.5, 5.8, 4.5, 7.9, 8.2};
  

    
    char m[20] = strcpy(m,"magicnum");
    
    count =  array_count(a,2, m);

    printf("Result = %.2f %d %s", count);
}
double array_count(double a[], int b, char m)
{
     
    
 
    double sum = 0.0;
    

    for (int i = 0; i < 8; ++i)
    {
        sum += a[i];
    }
    return sum;
}
