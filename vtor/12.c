#include <stdio.h>

int BrojPozitivni (int array[], int n) {
    return n == 0 ? 0 : (array[n-1] > 0 ? 1 : 0) + BrojPozitivni(array, n-1);
}

int main() {

    int n;

    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++) scanf("%d", &array[i]);

    printf("%d", BrojPozitivni(array, n));
}