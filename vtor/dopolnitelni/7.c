#include <stdio.h>

void premesti(int array[], int n) {

    int new_array[100], length = 0, flag;

    for (int i = 0; i < n; i++) if (array[i] >= 0) {
        new_array[length] = array[i];
        length++;
    }

    for (int i = 0; i < n; i++) {

        int j = length;
        flag = 1;

        while (j >= 0) {
            if (array[i] == new_array[j]) {
                flag = 0;
                break;
            }

            j--;
        }

        if (flag) {
            new_array[length] = array[i];
            length++;
        }
    }

    for (int i = 0; i < n; i++) array[i] = new_array[i];
}

int main() {

    int n, array[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) scanf("%d", &array[i]);

    premesti(array, n);

    for (int i = 0; i < n; i++) printf("%d ", array[i]);
}
