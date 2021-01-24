#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    
    //Möglichkeit 1
    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("fizzbuzz\n");
        }
        else if (i % 3 == 0)
        {
            printf("fizz\n");
        }
        else if (i % 3 == 0)
        {
            printf("buzz\n");
        }
        else 
        {
            printf("%d\n", i);
        }
    }
    
    
    //Möglichkeit 2
    for (i = 1; i <= 100; i++)
    {
        i % 15 == 0 ? printf("fizzbuzz\n") :
        i %  3 == 0 ? printf("fizz\n") :
        i %  5 == 0 ? printf("buzz\n") : printf("%d\n", i);
    }
    
    return EXIT_SUCCESS;    
}