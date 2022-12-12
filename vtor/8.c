#include <stdio.h>
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
    FILE *f;

    char row[100], new_row[100], max_row[100];
    int start, end, count, str_count, max_count = 0;

    if (!(f = fopen("dat.txt", "r"))) return -1;

    while (!feof(f)) {

        fgets(row, 100, f);

        if (feof(f)) break;

        count = str_count = 0;

        for (int i = 0; i < strlen(row)-1; i++) {
            if (row[i] >= '1' && row[i] <= '9') {
                start = i;
                break;
            }
        }

        for (int i = strlen(row)-1; i >= 0; i--) {
            if (row[i] >= '1' && row[i] <= '9') {
                end = i;
                break;
            }
        }

        for (int i = start; i <= end; i++) {
            if ((row[i] >= '1' && row[i] <= '9') || (row[i] >= 'a' && row[i] <= 'z') || (row[i] >= 'A' && row[i] <= 'Z')) {
                count++;
            }

            new_row[str_count] = row[i];
            str_count++;
        }

        if (max_count <= count) {
            max_count = count;
            for (int i = 0; i < str_count; i++) max_row[i] = new_row[i];
        }
    }

    printf("%s", max_row);
}