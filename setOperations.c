#include <stdio.h>

void unionSet(int A[], int n, int B[], int m) {
    int C[50], k = 0;
    for (int i = 0; i < n; i++) C[k++] = A[i];
    for (int i = 0; i < m; i++) {
        int found = 0;
        for (int j = 0; j < n; j++) if (B[i] == A[j]) found = 1;
        if (!found) C[k++] = B[i];
    }
    printf("Union: ");
    for (int i = 0; i < k; i++) printf("%d ", C[i]);
    printf("\n");
}

void intersectionSet(int A[], int n, int B[], int m) {
    printf("Intersection: ");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (A[i] == B[j]) printf("%d ", A[i]);
    printf("\n");
}

void differenceSet(int A[], int n, int B[], int m) {
    printf("Difference (A-B): ");
    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = 0; j < m; j++) if (A[i] == B[j]) found = 1;
        if (!found) printf("%d ", A[i]);
    }
    printf("\n");
}

void cartesianProduct(int A[], int n, int B[], int m) {
    printf("Cartesian Product: ");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            printf("(%d,%d) ", A[i], B[j]);
    printf("\n");
}

int main() {
    int A[] = {1, 2, 3}, B[] = {2, 3, 4};
    int n = 3, m = 3;

    unionSet(A, n, B, m);
    intersectionSet(A, n, B, m);
    differenceSet(A, n, B, m);
    cartesianProduct(A, n, B, m);
    return 0;
}
