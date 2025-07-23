#include <stdio.h>

// Binary Addition
int binaryAdd(int a, int b) {
    int carry;
    while (b != 0) {
        carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    return a;
}

// Binary Multiplication
int binaryMultiply(int a, int b) {
    int result = 0;
    while (b > 0) {
        if (b & 1) result = binaryAdd(result, a);
        a <<= 1;
        b >>= 1;
    }
    return result;
}

// Binary Division
int binaryDivide(int dividend, int divisor) {
    int quotient = 0;
    while (dividend >= divisor) {
        dividend = dividend - divisor;
        quotient++;
    }
    return quotient;
}

int main() {
    int a = 6, b = 3;
    printf("Binary Addition: %d + %d = %d\n", a, b, binaryAdd(a, b));
    printf("Binary Multiplication: %d * %d = %d\n", a, b, binaryMultiply(a, b));
    printf("Binary Division: %d / %d = %d\n", a, b, binaryDivide(a, b));
    return 0;
}
