#include <stdio.h>
#include <math.h>

int main() {
    double x;
    printf("Enter a floating point number: ");
    scanf("%lf", &x);

    printf("Ceiling of %.2f = %.2f\n", x, ceil(x));
    printf("Floor of %.2f = %.2f\n", x, floor(x));
    return 0;
}
