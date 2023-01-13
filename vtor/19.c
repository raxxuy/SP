#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    int n, x;
    char str[100];

    scanf("%d%d\n", &n, &x);

    for (int i = 0; i < n; i++) {

        fgets(str, 100, stdin);

        if (str[strlen(str)-1] == '\n') str[strlen(str)-1] = 0;

        for (int c = 0; c < strlen(str); c++) {
            if (isupper(str[c])) str[c] += (str[c] + x) > 'Z' ? x - 26 : x;
            else if (islower(str[c])) str[c] += (str[c] + x) > 'z' ? x - 26 : x;
        }

        printf("%s\n", str);
    }
}