#include <stdio.h>

void wtf() {
    FILE *f = fopen("broevi.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();

    FILE *f = fopen("broevi.txt", "r");

    int n, num, max_num;

    while (!feof(f)) {

        fscanf(f, "%d", &n);

        if (n == 0) break;

        int max_digit = 0;

        for (int i = 0; i < n; i++) {

            fscanf(f, "%d", &num);

            int temp = num;

            while (temp > 9) temp /= 10;

            if (max_digit < temp) {
                max_digit = temp;
                max_num = num;
            }
        }

        printf("%d\n", max_num);
    }
}