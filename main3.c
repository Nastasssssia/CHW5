#include <stdio.h>

/*
Составить логическую функцию, которая определяет, верно ли, что в заданном
числе сумма цифр равна произведению.
int is_happy_number(int n)
 */

int is_happy_number(int n)
{
    int sum = 0;
    int product = 1;
    int digit;

    while (n > 0)
    {
        digit = n % 10;
        sum += digit;
        product *= digit;
        n /= 10;
    }
    return sum == product;
}

int main()
{
    int number;
    scanf("%d", &number);

    if (is_happy_number(number))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}