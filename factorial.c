#include <stdio.h>

void numbers(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
}

int factorial(int n)
{
    int res = 1;

    for (int i = 1; i <= n; i++)
    {
        res *= i;
    }
    return res;
}

int main(int argc, char const *argv[])
{
    int number;
    printf("Enter an integer (only positive integers): ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Enter only positive integers!");
        return 0;
    }

    printf("Numbers: ");
    numbers(number);

    int result = factorial(number);
    printf("Factorial: %d\n", result);

    return 0;
}