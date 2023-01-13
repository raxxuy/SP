#include <stdio.h>
#include <math.h>

int main() {

    int m, n, matrix[100][100], num;
    float aritmeticka_sredina, najodalecena;

    scanf("%d%d", &m, &n);

    for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) scanf("%d", &matrix[i][j]);

    for (int i = 0; i < m; i++) {

        aritmeticka_sredina = najodalecena = 0;
        num = matrix[i][0];

        for (int j = 0; j < n; j++) aritmeticka_sredina += matrix[i][j];

        aritmeticka_sredina /= n;

        for (int j = 0; j < n; j++) {
            if (najodalecena < fabsf(aritmeticka_sredina - matrix[i][j])) {
                najodalecena = fabsf(aritmeticka_sredina - matrix[i][j]);
                num = matrix[i][j];
            }
        }

        printf("%d ", num);
    }
}