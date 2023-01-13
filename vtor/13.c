#include <stdio.h>

int main() {

    int x, m, n, matrix[100][100], sum;

    scanf("%d%d%d", &x, &m, &n);

    for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) scanf("%d", &matrix[i][j]);

    for (int i = 0; i < m; i++) {

        sum = 0;

        for (int j = 0; j < n; j++) sum += matrix[i][j];

        if (sum > x) for (int j = 0; j < n; j++) matrix[i][j] = 1;
        else if (sum < x) for (int j = 0; j < n; j++) matrix[i][j] = -1;
        else for (int j = 0; j < n; j++) matrix[i][j] = 0;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) printf("%d ", matrix[i][j]);
        printf("\n");
    }
}