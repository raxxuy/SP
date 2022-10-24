#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, zbir, najgolem = 0, najgolem_br;

    scanf("%d", &n);

    for (int i = 1; i < n; i++) {

        zbir = 0;

        for (int j = 1; j < i; j++) {

            if (i % j == 0) zbir += j;

            if (najgolem < zbir) {
                najgolem = zbir;
                najgolem_br = i;
            }
        }
    }

    printf("%d", najgolem_br);
}
