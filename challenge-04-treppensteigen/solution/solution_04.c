/* Main function of the C program. */

#include <stdio.h>
#include <stdlib.h>

int calculateCombinations(int stairs);

int main()
{
    
    int myStairs;
    int possibleCombinations;

    printf("Wie viele Stufen hat die Treppe? ");
    scanf("%d", &myStairs);

    possibleCombinations = calculateCombinations(myStairs);

    printf("Bei %d Stufen gibt es %d Kombinationen.", myStairs, possibleCombinations);
    
    /*
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("Bei %d Stufen gibt es %d Möglichkeiten.\n", i + 1, calculateCombinations(i + 1));
    }
    */

    return EXIT_SUCCESS;
}


int calculateCombinations(int stairs)
{
    if (stairs <= 0)
    {
        return 0;
    }
    else if (stairs == 1)
    {
        return 1;
    }
    else if (stairs == 2)
    {
        return 2;
    }

    //ab hier ist der Advanced Teil
    else
    {
        return 
            calculateCombinations(stairs - 1) + //wenn ich 1 Schritt mache, dann alle Verbleibenden Kombinationen danach
            calculateCombinations(stairs - 2);  //wenn ich 2 Schtitte mache, dann alle verbleibenden Kombinationen danach
    }
}

/*
Beispiele:

calculateCombinations(1);
=> 1

calculateCombinations(2);
=> 2

calculateCombinations(3);
=> calculateCombinations(2) + calculateCombinations(1)
=>            2             +              1
=> 3

calculateCombinations(4);
=> calculateCombinations(3)                            + calculateCombinations(2)
=> calculateCombinations(2) + calculateCombinations(1) + calculateCombinations(2)
=>            2             +             1            +            2
=> 5

*/