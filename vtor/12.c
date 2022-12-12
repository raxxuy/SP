#include <stdio.h>

int BrojPozitivni(int array[], int n) {
    if (n == -1) return 0;
    return (array[n-1] > 0 ? 1 : 0) + BrojPozitivni(array, n-1);
}

int main() {

    int n;

    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++) scanf("%d", &array[i]);

    printf("%d", BrojPozitivni(array, n));
}