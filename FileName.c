#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(void)
{
    SetConsoleOutputCP(CP_UTF8);

    double x, y, z;
    double w;

    printf("=== Вычисление функции w ===\n");
    printf("Введите x: ");
    scanf("%lf", &x);
    printf("Введите y: ");
    scanf("%lf", &y);
    printf("Введите z: ");
    scanf("%lf", &z);

    double Res1 = fabs(cos(x) - cos(y));
    double Res2 = 1.0 + 2.0 * pow(sin(y), 2);
    double Res3 = pow(Res1, Res2);

    double Res4 = 1.0 + z + pow(z, 2) / 2.0 + pow(z, 3) / 3.0 + pow(z, 4) / 4.0;

    w = Res3 * Res4;

    printf("\n--- Результат ---\n");
    printf("x = %.2e\n", x);
    printf("y = %.3f\n", y);
    printf("z = %.3e\n", z);
    printf("w = %.4f\n", w);

    return 0;
}