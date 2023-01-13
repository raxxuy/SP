#include <stdio.h>

int main() {

    int m, n, matrix[100][100], count = 0;

    scanf("%d%d", &m, &n);

    for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) scanf("%d", &matrix[i][j]);

    for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) {
        if (matrix[i][j] == 1 && matrix[i][j+1] == 1 && matrix[i][j+2] == 1) {
            count++;
            break;
        }
    }

    for (int j = 0; j < n; j++) for (int i = 0; i < m; i++) {
        if (matrix[i][j] == 1 && matrix[i+1][j] == 1 && matrix[i+2][j] == 1) {
            count++;
            break;
        }
    }

    printf("%d", count);
}