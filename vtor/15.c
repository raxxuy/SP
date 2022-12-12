#include <stdio.h>

int poramnuvanje(int n) {

    if (n == 0) return 0;

    int temp = 0;

    if (n%10 == 9) temp += 7;
    else temp += n%10;

    return poramnuvanje(n/10)*10 + temp;
}

int main() {

    int n, array[100], index = 0;

    while (scanf("%d", &n)) {
        array[index] = poramnuvanje(n);
        index++;
    }

    for (int i = 0; i < index; i++) for (int j = i+1; j < index; j++) {
        int temp;

        if (array[i] > array[j]) {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }

    for (int i = 0; i < (index >= 5 ? 5 : index); i++) printf("%d ", array[i]);
}