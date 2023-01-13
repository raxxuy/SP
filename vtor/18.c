#include <stdio.h>

int main() {

    int n;
    float matrix[100][100], x = 0, y = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) scanf("%f", &matrix[i][j]);

    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) {
        if (i > j) x += matrix[i][j];
        if (i + j >= n) y += matrix[i][j];
    }

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {
            if (i == j && (i + j == n-1)) matrix[i][j] = x+y;
            else if (i + j == n-1) matrix[i][j] = y;
            else if (i == j) matrix[i][j] = x;
            else matrix[i][j] = 0;

            printf("%.1f ", matrix[i][j]);
        }

        printf("\n");
    }
}