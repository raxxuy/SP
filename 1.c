//Благ број е број што е составен само од парни цифри (0, 2, 4, 6, 8). 
//Во зададен опсег (почетокот m и крајот на опегот n се цели броеви чија вредност се внесува од тастатура), да се најде и испечати најмалиот „благ број“. 
//Ако не постои таков број, да се испечати NE./

#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, bool, temp, broj;

    scanf("%d", &m, &n);

    for (int i = m; i <= n; i++) {

        bool = 1;
        temp = i;
        broj = temp;

        while (temp != 0) {
            if (temp%10 == 1 || temp%10 == 3 || temp%10 == 5 || temp%10 == 7 || temp%10 == 9) bool = 0;
            temp /= 10;
        }

        if (bool == 1) break;
    }

    if (bool == 1) printf("%d", broj);
    else printf("NE");
}