#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

int main() {
    int n, student, studenti1 = 0, studenti2 = 0, studenti3 = 0;

    scanf("%d", &n);

    int gr1[n], gr2[n], gr3[n];

    if (n <= MAX) {

        for (int i = 0; i < n; i++) {

            scanf("%d", &student);

            if (student % 10 == 0 || student % 10 == 1 || student % 10 == 2) {
                gr1[studenti1] = student;
                studenti1++;
            }

            if (student % 10 == 3 || student % 10 == 4 || student % 10 == 5) {
                gr2[studenti2] = student;
                studenti2++;
            }

            if (student % 10 == 6 || student % 10 == 7 || student % 10 == 8 || student % 10 == 9) {
                gr3[studenti3] = student;
                studenti3++;
            }
        }

        printf("Grupa 1\n");
        for (int i = 0; i < studenti1; i++) printf("%d ", gr1[i]);

        printf("\nGrupa 2\n");
        for (int i = 0; i < studenti2; i++) printf("%d ", gr2[i]);

        printf("\nGrupa 3\n");
        for (int i = 0; i < studenti3; i++) printf("%d ", gr3[i]);
    }
}
