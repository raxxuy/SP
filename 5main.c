#include <stdio.h>
#include <stdlib.h>

int main() {
    int z, a, b, parovi = 0, vkupno = 0;

    scanf("%d", &z);

    while (a != 0 || b != 0) {

        scanf("%d%d", &a, &b);

        vkupno++;

        if (a + b == z) parovi++;
    }

    printf("Vnesovte %d parovi od broevi chij zbir e %d", parovi, z);
    printf("Procentot na parovi so zbir %d e %.2f", z, (float)parovi/(vkupno-1)*100);
}
