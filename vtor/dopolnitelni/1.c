#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {

    int n, flag, sp_flag, max = 0;
    char line[80], max_line[80];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        scanf("%s", line);

        flag = 1;
        sp_flag = 0;

        for (int c = 0; c < strlen(line); c++) {

            if (line[c] != line[strlen(line)-c-1]) {
                flag = 0;
                break;
            }

            if (!sp_flag) if (ispunct(line[c])) sp_flag = line[c];
        }

        if (flag && sp_flag) {
            if (max < strlen(line)) {
                strcpy(max_line, line);
                max = strlen(line);
            }
        }
    }

    if (max == 0) printf("Nema!");
    else printf("%s", max_line);
}