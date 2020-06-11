#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, c, result = 0.0;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    result = (a * 2.0 + b * 3.0 + c * 5.0) / 10;
    printf("MEDIA = %.1lf\n", result);
    return 0;
}
