#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int A[100][100], B[100][100], C[100][100];

    // Read matrix A
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Read matrix B
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Compute sum C = A + B
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Print result
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", C[i][j]);
            if (j < n - 1) printf(" ");
            else printf("\n");
        }
    }

    return 0;
}
