#include <stdio.h>
#include <math.h>

void printFile() {
    FILE *f=fopen("shema.txt","r");
    char line[1000];
    while(!feof(f)){
        fgets(line,1000,f);
        if (feof(f))
            break;
        printf("%s",line);
    }
    fclose(f);
}

int main() {

    FILE *f = fopen("shema.txt", "w");

    int n, length = 0, count = 1, mat[20][20];

    scanf("%d", &n);

    while (1) {
        if (n > pow(length, 2) && n <= pow(length+1, 2)) {
            length++;
            break;
        }

        length++;
    }

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            if (i % 2 == 0) {
                if (count > n)
                    mat[j][i] = 0;
                else {
                    mat[j][i] = count;
                    count++;
                }
            } else {
                if (count > n)
                    mat[length-j-1][i] = 0;
                else {
                    mat[length-j-1][i] = count;
                    count++;
                }
            }
        }
    }

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) fprintf(f, "%d ", mat[i][j]);
        fprintf(f, "\n");
    }

    fclose(f);
    printFile();
}