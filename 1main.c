#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, temp, cifri, ost, temp_br;

    scanf("%d", &n);

    if (n < 10) {
        printf("Brojot ne e validen");
        return 0;
    }

    for (int i = n-1; i > 0; i--) {

        temp = i;
        temp_br = cifri = 0;

        while (temp != 0) {
            cifri++;
            ost = temp%10;
            temp_br *= 10;
            temp_br += ost;
            temp /= 10;
        }

        if (temp_br % cifri == 0) {
            printf("%d", i);
            break;
        }
    }
}
