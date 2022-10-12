#include <stdio.h>
#include <locale.h>
#include <math.h>

float getS(float h, float a) {
    float result = h / sin(a);
    return result;
}

void main()
{
    setlocale(LC_ALL, "RUS");

    //1 
    char c;
    int i;
    float f;
    double d;
    puts("введите знак(пример: !, f, s):\n");
    scanf("%c", &c);
    puts("введите целое число(пример: 15, 5, 31):");
    scanf("%d", &i);
    puts("введите введите число с буквой e(пример: 12e+32):");
    scanf("%le", &d);
    puts("введите дробное число(пример: 12,23):");
    scanf("%f", &f);
    printf("c = %c, i = %d, f = %f, d = %e\n", c, i, f, d);

    // 1a
    printf("целая часть f - %d\n", (int)f);
    printf("дробная часть f - %f\n", f-(int)f);

    // 1b
    printf("код символа c - %d\n", (int)c);

    // 1c
    printf("десятичное число i - %d\n", i);

    // 2
    int a = 11, b = 3;
    int x = a / b;
    float y = a / b;
    double z = a / b;
    printf("x = %d, y = %f, z = %lf\n", x, y, z);

    printf("(float)a/b = %f, (double)a/b = %lf\n", (float)(a / b), (double)(a / b));

    // 3
    int n;
    puts("введите трёхзнаное целочисленное значение:");
    scanf("%d", &n);
    printf("последняя цифра - %d, первая - %d, сумма цифра - %d", n % 10, n / 100, (n % 10) + (n / 100) + ((n % 100) / 10));

   // ДЗ
    float h;
    double a;
    double k;
    printf("Введите высоту горки:");
    scanf("%f", &h);
    printf("Введите угол наклона в радианах:");
    scanf("%le", &a);
    printf("Введите коэффициэнт трения:");
    scanf("%f", &k);
    float s = getS(h, a);
    printf("Путь равен %f м", s);
}
