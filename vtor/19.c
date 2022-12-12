//#include <stdio.h>
//#include <string.h>
//
//int main() {
//
//    int n, x;
//    char str[100];
//
//    scanf("%d%d", &n, &x);
//
//    for (int i = 0; i < n; i++) {
//
//        while (fgets(str, sizeof(str), stdin) != 0) {
//
//            str[strcspn(str, "\n")] = 0;
//
//            for (int c = 0; c < strlen(str); c++) {
//                if (str[c] >= 'A' && str[c] <= 'Z') {
//                    if ((str[c] + x) > 'Z') str[c] = str[c] + x - 26;
//                    else str[c] += x;
//                } else if (str[c] >= 'a' && str[c] <= 'z') {
//                    if ((str[c] + x) > 'z') str[c] = str[c] + x - 26;
//                    else str[c] += x;
//                }
//            }
//
//            if (str[0] != '\0') printf("%s\n", str);
//        }
//    }
//}

#include <stdio.h>
#include <string.h>

int main() {

    int n, x;
    char str[100];

    scanf("%d%d", &n, &x);

    for (int i = 0; i <= n; i++) {

        fgets(str, 100, stdin);

        str[strcspn(str, "\n")] = 0;

        for (int c = 0; c < strlen(str); c++) {
            if (str[c] >= 'A' && str[c] <= 'Z') {
                if ((str[c] + x) > 'Z') str[c] = str[c] + x - 26;
                else str[c] += x;
            } else if (str[c] >= 'a' && str[c] <= 'z') {
                if ((str[c] + x) > 'z') str[c] = str[c] + x - 26;
                else str[c] += x;
            }
        }

        if (str[0] != '\0') printf("%s\n", str);
    }
}