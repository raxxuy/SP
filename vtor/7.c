#include <stdio.h>
#include <math.h>

int main() {

    int m, n, array[100][100], num;
    float aritmeticka_sredina, najodalecena = 0;

    scanf("%d%d", &m, &n);

    for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) scanf("%d", &array[i][j]);

    for (int i = 0; i < m; i++) {

        aritmeticka_sredina = najodalecena = 0;
        num = array[i][0];

        for (int j = 0; j < n; j++) aritmeticka_sredina += array[i][j];

        aritmeticka_sredina /= (float) n;

        for (int j = 0; j < n; j++) {
            if (najodalecena < fabsf(aritmeticka_sredina - array[i][j])) {
                najodalecena = fabsf(aritmeticka_sredina - array[i][j]);
                num = array[i][j];
            }
        }

        printf("%d ", num);
    }
}