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

    FILE *f = fopen("podatoci.txt", "r");

    char line[100], rang[2];
    int start, end;

    scanf("%s", rang);

    if (strlen(rang) == 1) {
        rang[1] = rang[0];
        rang[0] = ' ';
    }

    while (!feof(f)) {

        fgets(line, 100, f);

        if (feof(f)) break;

        for (int i = 0; i < strlen(line); i++) {
            if (line[i] == rang[0]) {
                start = i;
                break;
            }
        }

        for (int i = strlen(line)-1; i >= 0; i--) {
            if (line[i] == rang[1]) {
                end = i;
                break;
            }
        }

        for (int i = start + 1; i < end; i++) printf("%c", line[i]);

        printf("\n");
    }
}