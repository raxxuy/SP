//Од стандарден влез се чита еден природен број n. Меѓу природните броеви помали од n, да се најде оној чиј што збир на делителите е најголем. 
//Во пресметувањето на збирот на делителите на даден број, да не се зема предвид самиот број./

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, zbir, najgolem = 0, najgolem_br;

    scanf("%d", &n);

    for (int i = 1; i < n; i++) {

        zbir = 0;

        for (int j = 1; j < i; j++) {

            if (i % j == 0) zbir += j;

            if (najgolem < zbir) {
                najgolem = zbir;
                najgolem_br = i;
            }
        }
    }

    printf("%d", najgolem_br);
}