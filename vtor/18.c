#include <stdio.h>

int main() {

    int n;
    float array[100][100], X = 0, Y = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) scanf("%f", &array[i][j]);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i > j) X += array[i][j];
            if (i + j >= n) Y += array[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j && (i + j == n-1)) array[i][j] = (X+Y);
            else if (i + j == n-1) array[i][j] = Y;
            else if (i == j) array[i][j] = X;
            else array[i][j] = 0;

            printf("%.1f ", array[i][j]);
        }

        printf("\n");
    }
}