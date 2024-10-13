#include <stdio.h>

/*
Составить функцию, которая определяет наибольший общий делитель двух
натуральных и привести пример ее использования
*/
int gcd(int a, int b)
{
    while (a != 0 && b != 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    return (a == 0) ? b : a;
}

int main()
{
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    printf("%d\n", gcd(num1, num2));
    return 0;
}