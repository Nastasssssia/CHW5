#include <stdio.h>

/*Мудрец попросил у Повелителя за первую клетку шахматной доски заплатить ему одно
зерно риса, за второе — два, за третье — четыре и т. д., удваивая количество
зёрен на каждой следующей клетке. Помоги повелителю сосчитать сколько
зерен на какой клетке лежит.
Необходимо составить функцию, которая определяет, сколько зерен попросил
положить на N-ую клетку изобретатель шахмат (на 1-ую – 1 зерно, на 2-ую – 2
зерна, на 3-ю – 4 зерна, …)
*/

unsigned long long grains_on_square(int n)
{
    unsigned long grains = 1;
    for (int i = 1; i < n; i++)
    {
        grains *= 2;
    }
    return grains;
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%llu\n", grains_on_square(num));
    return 0;
}