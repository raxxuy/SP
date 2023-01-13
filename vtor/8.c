#include <stdio.h>
#include <ctype.h>
#include <string.h>

// ne menuvaj ovde
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
    // vasiot kod ovde
    FILE *f = fopen("dat.txt", "r");

    char line[100], new_line[100], max_line[100];
    int start, end, count, str_count, max_count = 0;

    while (!feof(f)) {

        fgets(line, 100, f);

        count = str_count = 0;

        for (int i = 0; i < strlen(line); i++) {
            if (isdigit(line[i])) {
                start = i;
                break;
            }
        }

        for (int i = strlen(line)-1; i >= 0; i--) {
            if (isdigit(line[i])) {
                end = i;
                break;
            }
        }

        for (int i = start; i <= end; i++) {
            if (isdigit(line[i]) || isalpha(line[i])) count++;
            new_line[str_count] = line[i];
            str_count++;
        }

        if (max_count <= count) {
            max_count = count;
            for (int i = 0; i < str_count; i++) max_line[i] = new_line[i];
        }
    }

    printf("%s", max_line);
}