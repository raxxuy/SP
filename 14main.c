#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

int main() {
    int n, student, pad = 0, pol = 0, pad_poeni = 0, pol_poeni = 0;

    scanf("%d", &n);

    int padnati[n], polozeni[n];

    if (n <= MAX) {

        for (int i = 0; i < n; i++) {

            scanf("%d", &student);

            if (student < 50) {
                pad_poeni += student;
                padnati[pad] = student;
                pad++;
            } else {
                pol_poeni += student;
                polozeni[pol] = student;
                pol++;
            }
        }

        printf("Sredna vrednost na padnati %.2f\n", (float)pad_poeni/pad);
        for (int i = 0; i < pad; i++) printf("%d ", padnati[i]);

        printf("\nSredna vrednost na polozeni %.2f\n", (float)pol_poeni/pol);
        for (int i = 0; i < pol; i++) printf("%d ", polozeni[i]);
    }
}
