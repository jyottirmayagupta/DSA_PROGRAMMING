#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int mat[100][100];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    if (m != n) {
        printf("Not a Symmetric Matrix\n");
        return 0;
    }

    int isSymmetric = 1;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < i; j++) {  // Only upper triangle to avoid duplicate checks
            if (mat[i][j] != mat[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric) break;
    }

    if (isSymmetric) {
        printf("Symmetric Matrix\n");
    } else {
        printf("Not a Symmetric Matrix\n");
    }

    return 0;
}
