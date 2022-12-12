//Eден природен e „интересен“ ако неговиот обратен број е делив со неговиот број на цифри. 
//Обратен број е бројот составен од истите цифри, но во обратен редослед (на пример, 653 е обратен број на бројот 356). 
//Од тастатура се внесува природен број n ( n > 9). Да се најде и отпечати најголемиот природен број помал од n кој што е „интересен“. 
//Ако внесениот број не е валиден, да се отпечати соодветна порака (Brojot ne e validen).

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, temp, cifri, ost, temp_br;

    scanf("%d", &n);

    if (n < 10) {
        printf("Brojot ne e validen");
        return 0;
    }

    for (int i = n-1; i > 0; i--) {

        temp = i;
        temp_br = cifri = 0;

        while (temp != 0) {
            cifri++;
            ost = temp%10;
            temp_br *= 10;
            temp_br += ost;
            temp /= 10;
        }

        if (temp_br % cifri == 0) {
            printf("%d", i);
            break;
        }
    }
}