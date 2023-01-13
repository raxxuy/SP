#include <stdio.h>

void wtf() {
    FILE *f = fopen("matrica.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();

    FILE *f = fopen("matrica.txt", "r");

    int m, n, mat[100][100], count;

    fscanf(f, "%d %d", &m, &n);

    for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) fscanf(f, "%d", &mat[i][j]);

    for (int i = 0; i < m; i++) {

        count = 0;

        for (int j = 0; j < n; j++) if (mat[i][j] % 2 == (i + j) % 2) count++;

        printf("%d: %d\n", i, count);
    }
}
