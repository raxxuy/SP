#include <stdio.h>
#include <stdlib.h>

int leva(const int array[], int n) {
    int sum = 0;
    for (int i = 0; i < n/2; i++) sum += array[i];
    return sum;
}

int desna(const int array[], int n) {
    int sum = 0, i;
    if (n % 2 == 0) i = n/2;
    else i = n/2 + 1;
    for (i; i < n; i++) sum += array[i];
    return sum;
}

int main() {

    int m, n, array[100][100], leva_vr, desna_vr, razlika;

    scanf("%d%d", &m, &n);

    for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) scanf("%d", &array[i][j]);

    for (int i = 0; i < m; i++) {

        leva_vr = leva(array[i], n);
        desna_vr = desna(array[i], n);

        razlika = abs(leva_vr - desna_vr);

        if (n % 2 == 0) array[i][n/2-1] = array[i][n/2] = razlika;
        else array[i][n/2] = razlika;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) printf("%d ", array[i][j]);
        printf("\n");
    }
}