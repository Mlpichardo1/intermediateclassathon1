#include <cs50.h>
#include <stdio.h>

bool isPrime(int);
int sumPrimes(int);

int main(void)
{
    int input = get_int("Enter number: ");
    printf("%i\n", sumPrimes(input));
}

bool isPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int sumPrimes(int number)
{
    int sum = 0;
    for (int i = 2; i <= number; i++)
    {
        if (isPrime(i))
        {
            sum += i;
        }
    }
    return sum;
}