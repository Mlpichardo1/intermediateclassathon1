#include <cs50.h>
#include <stdio.h>

int factorialize(long long);

int main(void)
{
    int input = get_int("Enter number: ");
    printf("%i\n", factorialize(input));
}

int factorialize(long long num)
{
    if (num == 0)
    {
        return 1;
    }
    else
    {
        return num * factorialize(num - 1);
    }
}
