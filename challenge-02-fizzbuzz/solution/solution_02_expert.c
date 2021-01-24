#include <stdio.h>
#include <stdlib.h>


void fizzBuzz(int number);
int getRest(int dividend, int divisor);


int main()
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        fizzBuzz(i);
    }

    return EXIT_SUCCESS;
}


void fizzBuzz(int number)
{
    getRest(number, 15) == 0 ? printf("fizzbuzz\n") :
    getRest(number, 3) == 0 ? printf("fizz\n") :
    getRest(number, 5) == 0 ? printf("buzz\n") : printf("%d\n", number);
}


int getRest(int dividend, int divisor)
{
    int quotient = dividend / divisor;

    int product = divisor * quotient;

    int rest = dividend - quotient * divisor;

    return rest;
}