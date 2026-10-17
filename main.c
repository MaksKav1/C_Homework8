#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    double x;
    double sum = 0;
    double current;
    printf("Введите n: ");
    scanf("%d", &n);
    printf("Введите x: ");
    scanf("%lf", &x);
    current = x;
    for (int i = 1; i <= n; i++)
    {
        current = sin(current);
        sum += current;
    }
    printf("Результат = %.6f\n", sum);
    return 0;
}
