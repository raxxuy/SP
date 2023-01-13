#include <stdio.h>

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

    FILE *f = fopen("livce.txt", "r");

    char code[100][100];
    int pay, type[100], i = 0, index;
    float koeficient[100], maxK = 0, payout = 0;

    fscanf(f, "%d", &pay);

    payout += pay;

    while (!feof(f)) {

        fscanf(f, "%s %d %f", code[i], &type[i], &koeficient[i]);

        if (feof(f)) break;

        i++;
    }

    for (int j = 0; j < i; j++) {

        payout *= koeficient[j];

        if (maxK < koeficient[j]) {
            maxK = koeficient[j];
            index = j;
        }
    }

    printf("%s %d %.2f\n%.2f", code[index], type[index], koeficient[index], payout);
}