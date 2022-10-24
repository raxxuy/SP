#include <stdio.h>
#include <stdlib.h>

int main() {
    int temp = 0, zbir = 0;
    char ch;

    while ((ch = getchar()) != '!') {

        if (ch >= 48 && ch <= 57) {

            temp *= 10;
            temp += ch - 48;

        } else {

            zbir += temp;
            temp = 0;
        }
    }

    printf("%d", zbir + temp);
}
