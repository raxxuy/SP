//Од стандарден влез се читаат непознат број на хексадецимални цифри се додека не се внесе точка (.). 
//Ваша задача е да го пресметате декадниот збир на внесените хексадецимални цифри. Доколку добиениот декаден збир е делив со 16 се печати Pogodok. 
//Доколку истиот тој збир покрај што е делив со 16 плус завршува на 16 (последните цифри му се 1 и 6), се печати Poln pogodok инаку се печати самиот збир.

#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch;
    int zbir = 0;

    while ((ch = getchar()) != '.') {
        if (ch >= 48 && ch <= 57) zbir += ch - 48;
        if (ch >= 65 && ch <= 70) zbir += ch - 55;
        if (ch >= 97 && ch <= 102) zbir += ch - 87;
    }

    if (zbir % 16 == 0 && zbir % 100 == 16) printf("Poln pogodok");
    else if (zbir % 16 == 0) printf("Pogodok");
    else printf("%d", zbir);
}
