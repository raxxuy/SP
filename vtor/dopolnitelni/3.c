#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    int n, count;
    char line[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        scanf("%s", line);

        count = 0;

        for (int c = 0; c < strlen(line); c++)
            if (toupper(line[c]) == 'A' && line[c+1] == '1' && tolower(line[c+2]) == 'c') count++;

        if (count > 1) {
            for (int c = 0; c < strlen(line); c++) line[c] = tolower(line[c]);
            printf("%s\n", line);
        }
    }
}