#include <stdio.h>
#include <stdlib.h>


void fizzBuzz(int number);


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
    number % 15 == 0 ? printf("fizzbuzz\n") :
        number % 3 == 0 ? printf("fizz\n") :
        number % 5 == 0 ? printf("buzz\n") : printf("%d\n", number);
}