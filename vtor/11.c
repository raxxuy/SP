#include <stdio.h>
#include <ctype.h>
#include <string.h>

void wtf() {
    FILE *f = fopen("dat.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();

    FILE *f;

    char row[100], a[100];
    int prv, posleden, max = 0, count;

    if (!(f = fopen("dat.txt", "r"))) return -1;

    while (!feof(f)) {

        fgets(row, 100, f);

        if (feof(f)) break;

        count = 0;

        for (int i = 0; i < strlen(row); i++) {
            if (row[i] >= '0' && row[i] <= '9') {
                prv = i;
                break;
            }
        }

        for (int i = (int) strlen(row)-1; i >= 0; i++) {
            if (row[i] >= '0' && row[i] <= '9') {
                posleden = i;
                break;
            }
        }

        for (int i = prv; i <= posleden; i++) count++;

        if (max <= count) {
            max = count;
            for (int i = 0; i <= posleden-prv; i++) a[i] = row[prv+i];
        }
    }

    for (int i = 0; i < strlen(a); i++) printf("%c", a[i]);
}
