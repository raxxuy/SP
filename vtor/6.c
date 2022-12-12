#include <stdio.h>

int main() {

    int m, n, array[100][100], count = 0;

    scanf("%d%d", &m, &n);

    for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) scanf("%d", &array[i][j]);

    for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) if (array[i][j] == 1 && array[i][j+1] == 1 && array[i][j+2] == 1) {
        count++;
        break;
    }

    for (int j = 0; j < n; j++) for (int i = 0; i < m; i++) if (array[i][j] == 1 && array[i+1][j] == 1 && array[i+2][j] == 1) {
        count++;
        break;
    }

    printf("%d", count);
}