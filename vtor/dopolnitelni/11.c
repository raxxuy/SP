#include <stdio.h>
#include <stdlib.h>

void transform (int array[], int n) {
    int first = abs(array[0]);

    if (array[0] > 0) {
        for (int j = 0; j < n; j++) if (n - 1 - j - first >= 0) array[n-1-j] = array[n-1-j-first];
        for (int j = 0; j < first; j++) {
            if (j == n) break;
            array[j] = 0;
        }
    }

    if (array[0] < 0) {
        for (int j = 0; j < n; j++) if (j + first < n) array[j] = array[j+first];
        for (int j = 0; j < first; j++) {
            if (j == n) break;
            array[n-1-j] = 0;
        }
    }
}

int main() {

    int m, n, array[300], count = 0;

    scanf("%d", &m);

    for (int i = 0; i < m; i++) {

        scanf("%d", &n);

        for (int j = 0; j < n; j++) scanf("%d", &array[j]);

        int flag = 1;

        transform(array, n);

        for (int j = 0; j < n; j++) {
            if (array[j] != 0) {
                flag = 0;
                break;
            }
        }

        if (flag) count++;

        for (int j = 0; j < n; j++) printf("%d ", array[j]);
        printf("\n");
    }

    printf("%d", count);
}
