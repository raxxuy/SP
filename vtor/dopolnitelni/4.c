#include <stdio.h>

void printFile() {
    FILE *f=fopen("matrica.txt","r");
    char line[1000];
    while(!feof(f)){
        fgets(line,1000,f);
        if (feof(f))
            break;
        printf("%s",line);
    }
    fclose(f);
}

int main() {

    FILE *f = fopen("matrica.txt", "w");

    int m, n, r, k;
    int mat[30][30], min, min_check = 0;

    scanf("%d%d%d%d", &m, &n, &r, &k);

    for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) {
        scanf("%d", &mat[i][j]);

        if (!min_check) {
            min = mat[0][0];
            min_check = 1;
        }

        if (min > mat[i][j]) min = mat[i][j];
    }

    for (int i = 0; i < r; i++) for (int j = 0; j < k; j++) mat[i][j] = min;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) fprintf(f,"%d ", mat[i][j]);
        fprintf(f, "\n");
    }

    fclose(f);
    printFile();
}