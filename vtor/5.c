#include <stdio.h>

// ne menuvaj ovde
void wf() {
    FILE *f = fopen("livce.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wf();

    FILE *f;

    if (!(f = fopen("livce.txt", "r"))) return -1;

    char sifra[100][100];
    int uplata, type[100], i = 0, index;
    float koeficient[100], maxK = 0, dobivka = 0;

    fscanf(f, "%d", &uplata);

    dobivka += uplata;

    while (!feof(f)) {

        fscanf(f, "%s %d %f", sifra[i], &type[i], &koeficient[i]);

        if (feof(f)) break;

        i++;
    }

    for (int j = 0; j < i; j++) {

        dobivka *= koeficient[j];

        if (maxK < koeficient[j]) {
            maxK = koeficient[j];
            index = j;
        }
    }

    printf("%s %d %.2f\n%.2f", sifra[index], type[index], koeficient[index], dobivka);
}