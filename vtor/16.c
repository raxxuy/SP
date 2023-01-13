#include <stdio.h>

int max (int n, int temp) {
    return n == 0 ? temp : max(n/10, (temp < n%10 ? n%10 : temp));
}

int main() {
    int n;
    while (scanf("%d", &n)) printf("%d\n", max(n, 0));
}