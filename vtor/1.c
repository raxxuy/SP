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
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    // moze isto  return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int main() {

    writeToFile();

    FILE *f = fopen("text.txt", "r");

    int count = 0;
    char prev, current;

    while ((current = fgetc(f)) != EOF) {

        current = tolower(current);

        if (prev) {
            if (vowel(prev) && vowel(current)) {
                printf("%c%c\n", prev, current);
                count++;
            }
        }

        prev = current;
    }

    printf("%d", count);
}