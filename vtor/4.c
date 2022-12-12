#include <stdio.h>

int main() {

    int n, m, x, y, quadrant1 = 0, quadrant2 = 0, quadrant3 = 0, quadrant4 = 0;

    scanf("%d%d", &n, &m);

    int matrix[n][m];

    for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) scanf("%d", &matrix[i][j]);

    scanf("%d%d", &x, &y);

    for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) {
        if (i < x) {
            if (j > y) quadrant1 += matrix[i][j];
            else quadrant2 += matrix[i][j];
        } else {
            if (j > y) quadrant3 += matrix[i][j];
            else quadrant4 += matrix[i][j];
        }
    }

    printf("%d %d %d %d", quadrant1, quadrant2, quadrant3, quadrant4);
}