#include <stdio.h>
#include <ctype.h>

void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int vowel (char ch) {
    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return 1;
    else return 0;
}

int main() {

    writeToFile();

    FILE *f;

    char prev, ch;
    int count = 0;

    if (!(f = fopen("text.txt", "r"))) return -1;

    while ((ch = fgetc(f)) != EOF) {
        if (prev) {
            if (vowel(prev) && vowel(ch)) {
                printf("%c%c\n", tolower(prev), tolower(ch));
                count++;
            }
        }

        prev = ch;
    }

    printf("%d", count);
}