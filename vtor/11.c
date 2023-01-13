#include <stdio.h>
#include <ctype.h>
#include <string.h>

void wtf() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();

    FILE *f = fopen("input.txt", "r");

    char line[100];
    int count, digits[100];

    while (!feof(f)) {

        fscanf(f, "%s", line);

        if (feof(f)) break;

        count = 0;

        for (int i = 0; i < strlen(line); i++) {
            if (isdigit(line[i])) {
                digits[count] = line[i] - '0';
                count++;
            }
        }

        for (int i = 0; i < count; i++) for (int j = i+1; j < count; j++) {
                if (digits[i] > digits[j]) {
                    int temp = digits[i];
                    digits[i] = digits[j];
                    digits[j] = temp;
                }
            }

        printf("%d:", count);

        for (int i = 0; i < count; i++) printf("%d", digits[i]);

        printf("\n");
    }
}
