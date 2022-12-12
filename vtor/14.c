#include <stdio.h>

int main() {

    int n, array[50][100], newArray[50][100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) for (int j = 0; j < n*2; j++) scanf("%d", &array[i][j]);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            newArray[i][j] = array[i][j];
            newArray[i+n][j] = array[i][j+n];
        }
    }

    for (int i = 0; i < n*2; i++) {
        for (int j = 0; j < n; j++) printf("%d ", newArray[i][j]);
        printf("\n");
    }
}