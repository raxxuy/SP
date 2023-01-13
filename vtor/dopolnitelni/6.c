#include <stdio.h>

int par(int array[], int n) {

    int count, min;

    for (int i = 0; i < n; i++) {

        count = 0;

        for (int j = 0; j < n; j++)
            if (array[i] == array[j]) count++;

        if (count % 2 == 0 && count != 0) {
            if (!min) min = array[0];
            if (min > array[i]) min = array[i];
        }
    }

    if (min) return min;
    else return 0;
}

int main() {

    int n, array[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) scanf("%d", &array[i]);

    if (par(array, n)) printf("Najmaliot element koj se pojavuva paren broj pati e %d", par(array, n));
    else printf("Nitu eden element ne se pojavuva paren broj pati!");
}