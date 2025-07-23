#include <stdio.h>

// Euclidean Algorithm for GCD
int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

// Extended Euclidean Algorithm
int extendedGCD(int a, int b, int *x, int *y) {
    if (b == 0) {
        *x = 1;
        *y = 0;
        return a;
    }
    int x1, y1;
    int gcd = extendedGCD(b, a % b, &x1, &y1);
    *x = y1;
    *y = x1 - (a / b) * y1;
    return gcd;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("GCD (Euclidean) = %d\n", gcd(a, b));

    int x, y;
    int g = extendedGCD(a, b, &x, &y);
    printf("Extended GCD = %d, x = %d, y = %d\n", g, x, y);
    return 0;
}
