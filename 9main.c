#include <stdio.h>
#include <stdlib.h>

int main () {
    int n, temp, a, b, count, t_count, start;

    while (scanf("%d", &n)) {

        if (n > 9) {

            temp = n;
            a = b = count = t_count = start = 0;

            while (temp > 9) {

                a = temp%10;
                b = (temp/10)%10;

                if (a == b) {
                    count++;
                    break;
                }

                if (count == 0 && a > b) start = 1;

                if (start == 0) {

                    if (count%2 == 0) {
                        if (a < b) t_count++;
                    } else {
                        if (a > b) t_count++;
                    }

                } else {

                    if (count%2 == 0) {
                        if (a > b) t_count++;
                    } else {
                        if (a < b) t_count++;
                    }
                }

                count++;
                temp /= 10;
            }

            if (count == t_count) printf("%d\n", n);
        }
    }
}
