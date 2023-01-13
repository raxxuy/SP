#include <stdio.h>
#include <math.h>

void wtf() {
    FILE *f = fopen("matrica.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int digits(int n) {

    if (n == 0) return 1;

    int digit = 0;

    while (n != 0) {
        digit++;
        n /= 10;
    }

    return digit;
}

int main() {
    wtf();

    FILE *f = fopen("matrica.txt", "r");

    int m, n, mat[120][120], count;

    fscanf(f, "%d %d", &m, &n);

    for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) fscanf(f, "%d", &mat[i][j]);

    for (int j = 0; j < n; j++) {

        count = 0;

        for (int i = 0; i < m; i++) if (mat[i][j] == i*pow(10, digits(j)) + j) count++;

        printf("%d\n", count);
    }
}
