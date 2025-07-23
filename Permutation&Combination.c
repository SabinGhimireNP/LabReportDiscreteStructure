#include <stdio.h>

long factorial(int n)
{
    return (n == 0 || n == 1) ? 1 : n * factorial(n - 1);
}

long permutation(int n, int r)
{
    return factorial(n) / factorial(n - r);
}

long combination(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
    int n, r;
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);

    printf("P(%d,%d) = %ld\n", n, r, permutation(n, r));
    printf("C(%d,%d) = %ld\n", n, r, combination(n, r));
    return 0;
}
