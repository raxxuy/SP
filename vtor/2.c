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

    FILE *f;

    int n, num, max_num, temp, max_digit;

    if (!(f = fopen("broevi.txt", "r"))) return -1;

    while (!feof(f)) {

        fscanf(f, "%d", &n);

        max_digit = 0;

        if (n == 0) break;
        else for (int i = 0; i < n; i++) {

            fscanf(f, "%d", &num);

            temp = num;

            while (temp > 9) temp /= 10;

            if (max_digit < temp) {
                max_digit = temp;
                max_num = num;
            }
        }

        printf("%d\n", max_num);
    }
}