#include <stdio.h>

// Составить функцию, которая определяет сумму всех чисел от 1 до N и
// привести пример ее использования.

unsigned long sum_number(int n)
{
    unsigned long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int number;
    scanf("%d", &number);
    printf("%lu\n", sum_number(number));
    return 0;
}
