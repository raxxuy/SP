#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, bool, temp, broj;

    scanf("%d", &m, &n);

    for (int i = m; i <= n; i++) {

        bool = 1;
        temp = i;
        broj = temp;

        while (temp != 0) {
            if (temp%10 == 1 || temp%10 == 3 || temp%10 == 5 || temp%10 == 7 || temp%10 == 9) bool = 0;
            temp /= 10;
        }

        if (bool == 1) break;
    }

    if (bool == 1) printf("%d", broj);
    else printf("NE");
}
