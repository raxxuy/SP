#include <stdio.h>

float formula (int array[], int n, int index) {

    if (index+1 == n) return array[index];

    return array[index] + 1/formula(array, n, index+1);
}

int main() {

    int n, array[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) scanf("%d", &array[i]);

    printf("%f", formula(array, n, 0));
}