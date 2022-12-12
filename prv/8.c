//Од стандарден влез се внесуваат два цели броја N и Х.
//Да се најде најблискот број помал од N коj е тотално различен од бројот Х.
//Еден број е тотално различен од друг ако и само ако во него не се појавува ниту една од цифрите на другиот број.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, x, temp, temp_x, bool;

    scanf("%d%d", &n, &x);

    for (int i = n-1; i > 0; i--) {

        bool = 1;
        temp = i;

        while (temp != 0) {

            temp_x = x;

            while (temp_x != 0) {
                if (temp%10 == temp_x%10) bool = 0;
                temp_x /= 10;
            }

            temp /= 10;
        }

        if (bool == 1) {
            printf("%d", i);
            break;
        }
    }
}
