#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, temp, cifri, pos, arr[5] = {0};

    while ((scanf("%d", &n)) == 1) {

        temp = cifri = pos = 0;

        while (n != 0) {

            cifri++;

            if (temp < n%10) {

                if (cifri > pos) pos = cifri;

                temp = n%10;
            }

            n /= 10;
        }

        arr[pos-1]++;
    }

    for (int i = 0; i < 5; i++) printf("%d: %d\n", i, arr[i]);
}
