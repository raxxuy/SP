#include <stdio.h>

int sum_pos (int *pointer, int index, int n) {

    if (index >= n) return 0;

    int sum = 0;

    for (int i = index; i < n; i++) sum += *(pointer + i);
    return sum;
}

int main() {

    int n, index, *pointer;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) scanf("%d", pointer + i);

    scanf("%d", &index);

    printf("%d", sum_pos(pointer, index, n));
}