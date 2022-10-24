#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, temp, parni = 0, cifri = 0;

    scanf("%d%d", &a, &b);

    if (a > 0 && b > 0) {

        if (b > a) {
            temp = b;
            b = a;
            a = temp;
        }

        a /= 10;

        while (a != 0 || b != 0) {

            cifri++;
            if (a%10 == b%10) parni++;

            a /= 100;
            b /= 10;
        }

        if (parni == cifri) printf("PAREN");
        else printf("NE");

    } else {

        printf("Invalid input");
    }
}
