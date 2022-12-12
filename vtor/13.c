#include <stdio.h>

int main() {

    int x, m, n, array[100][100], sum;

    scanf("%d%d%d", &x, &m, &n);

    for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) scanf("%d", &array[i][j]);

    for (int i = 0; i < m; i++) {

        sum = 0;

        for (int j = 0; j < n; j++) sum += array[i][j];

        if (sum > x) for (int j = 0; j < n; j++) array[i][j] = 1;
        else if (sum < x) for (int j = 0; j < n; j++) array[i][j] = -1;
        else for (int j = 0; j < n; j++) array[i][j] = 0;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) printf("%d", array[i][j]);
        printf("\n");
    }
}