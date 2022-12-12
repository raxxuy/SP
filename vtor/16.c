#include <stdio.h>

int max(int n, int temp) {

    if (n == 0) return temp;
    if (temp < n%10) temp = n%10;

    return max(n/10, temp);
}

int main() {

    int n;

    while (scanf("%d", &n)) printf("%d", max(n, 0));
}