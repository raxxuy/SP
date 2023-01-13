#include <stdio.h>

int poramnet (int n) {
    return n == 0 ? 0 : poramnet(n/10)*10 + (n%10 == 9 ? 7 : n%10);
}

int main() {

    int n, array[100], index = 0;

    while (scanf("%d", &n)) {
        array[index] = poramnet(n);
        index++;
    }

    for (int i = 0; i < index; i++) for (int j = i+1; j < index; j++) {
        if (array[i] > array[j]) {
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }

    for (int i = 0; i < (index >= 5 ? 5 : index); i++) printf("%d ", array[i]);
}