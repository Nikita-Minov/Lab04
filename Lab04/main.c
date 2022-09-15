#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()
{
    setlocale(LC_ALL, "RUS");

    //1 
    char c;
    int i;
    float f;
    double d;
    puts("Введите знак(Пример: !, f, s):");
    scanf("%c", &c);
    puts("Введите целое число(Пример: 15, 5, 31):");
    scanf("%d", &i);
    puts("Введите введите число с буквой e(Пример: 12e+32):");
    scanf("%le", &d);
    puts("Введите дробное число(Пример: 12,23):");
    scanf("%f", &f);
    printf("c = %c, i = %d, f = %f, d = %e\n", c, i, f, d);

    // 1a
    printf("Целая часть f - %d\n", (int)f);
    printf("Дробная часть f - %f\n", f-(int)f);

    // 1b
    printf("Код символа c - %d\n", (int)c);

    // 1c
    printf("Десятичное число i - %d\n", i);

    // 2
    int a = 11, b = 3;
    int x = a / b;
    float y = a / b;
    double z = a / b;
    printf("x = %d, y = %f, z = %lf\n", x, y, z);

    printf("(float)a/b = %f, (double)a/b = %lf\n", (float)(a / b), (double)(a / b));

    // 3
    int n;
    puts("Введите трёхзнаное целочисленное значение:");
    scanf("%d", &n);
    printf("Последняя цифра - %d, первая - %d, сумма цифра - %d", n % 10, n / 100, (n % 10) + (n / 100) + ((n % 100) / 10));
}
