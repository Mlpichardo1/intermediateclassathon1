#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int sumFibs(int);

int main(void)
{
    int input = get_int("Enter number: ");
    printf("%i\n", sumFibs(input));
}

int sumFibs(int num)
{
    int previous = 0;
    int current = 1;
    int result = 0;

    while (current <= num)
    {
        if (current %2 != 0)
        {
            result += current;
        }
        current += previous;
        previous = current - previous;
    }
    return result;
}
