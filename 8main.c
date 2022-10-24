#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch;
    int zbir = 0;

    while ((ch = getchar()) != '.') {
        if (ch >= 48 && ch <= 57) zbir += ch - 48;
        if (ch >= 65 && ch <= 70) zbir += ch - 55;
        if (ch >= 97 && ch <= 102) zbir += ch - 87;
    }

    if (zbir % 16 == 0 && zbir % 100 == 16) printf("Poln pogodok");
    else if (zbir % 16 == 0) printf("Pogodok");
    else printf("%d", zbir);
}
