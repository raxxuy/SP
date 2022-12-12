#include <stdio.h>
#include <string.h>

void wtf() {
    FILE *f = fopen("podatoci.txt", "w");
    char c;
    while ((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();

    FILE *f;

    char row[100], rang[2];
    int pocetok, kraj;

    if (!(f = fopen("podatoci.txt", "r"))) return -1;

    scanf("%s", rang);

    if (strlen(rang) == 1) {
        rang[1] = rang[0];
        rang[0] = ' ';
    }

    while (!feof(f)) {

        fgets(row, sizeof(row), f);

        if (feof(f)) break;

        for (int i = 0; i < strlen(row); i++) if (row[i] == rang[0]) {
            pocetok = i;
            break;
        }

        for (int i = strlen(row) - 1; i >= 0; i--) if (row[i] == rang[1]) {
            kraj = i;
            break;
        }

        for (int i = pocetok + 1; i < kraj; i++) printf("%c", row[i]);

        printf("\n");
    }
}