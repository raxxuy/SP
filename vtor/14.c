#include <stdio.h>

int main() {

    int n, matrix[50][100], newMatrix[50][100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) for (int j = 0; j < n*2; j++) scanf("%d", &matrix[i][j]);

    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) {
        newMatrix[i][j] = matrix[i][j];
        newMatrix[i+n][j] = matrix[i][j+n];
    }

    for (int i = 0; i < n*2; i++) {
        for (int j = 0; j < n; j++) printf("%d ", newMatrix[i][j]);
        printf("\n");
    }
}