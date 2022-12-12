//Цик-цак е број за кој што важи дека за секој пар соседни цифри, тие се наизменично поголеми односно помали една во однос на друга. 
//На пример, ако бројот x е составен од цифрите a, b, c, d и е, тогаш за нив важи:
//a>b, b<c, c>d, d<e или a<b, b>c, c<d, d>e
//Пр. 343, 4624, 6231209
//Од тастатура се читаат непознат број цели броеви поголеми од или еднакви на 10 (броевите помали од 10 се игнорираат). 
//Читањето завршува во моментот кога ќе се прочита знак што не е цифра. Да се испечатат сите цик-цак броеви.

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
