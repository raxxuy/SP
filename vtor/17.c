#include <stdio.h>
#include <stdlib.h>

int leva (int array[], int n) {
    int sum = 0;
    for (int i = 0; i < n/2; i++) sum += array[i];
    return sum;
}

int desna (int array[], int n) {
    int sum = 0;
    for (int i = (n%2 == 0 ? n/2 : n/2+1); i < n; i++) sum += array[i];
    return sum;
}

int main() {

    int m, n, matrix[100][100], leva_vr, desna_vr, razlika;

    scanf("%d%d", &m, &n);

    for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) scanf("%d", &matrix[i][j]);

    for (int i = 0; i < m; i++) {

        leva_vr = leva(matrix[i], n);
        desna_vr = desna(matrix[i], n);

        razlika = abs(leva_vr - desna_vr);

        if (n % 2 == 0) matrix[i][n/2-1] = matrix[i][n/2] = razlika;
        else matrix[i][n/2] = razlika;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) printf("%d ", matrix[i][j]);
        printf("\n");
    }
}