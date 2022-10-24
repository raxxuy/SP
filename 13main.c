#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, zbir, temp, temp_br;

    while ((scanf("%d", &n)) == 1) {

        zbir = 0;

        while (temp_br != 0) {
            if (temp < temp_br%10) temp = temp_br%10;
            temp_br /= 10;
        }

        temp_br = n;

        while (n != 0) {
            zbir += n%10;
            n /= 10;
        }

        printf("%d: %d", temp_br, zbir + temp);
    }
}
