#include<stdio.h>

int main() {
    for (int i = 2; i <= 7; i++) {
        for (int j = 1; j < 11; j++) {
            int table = i * j;
            printf("%d * %d = %d\n", i, j, table);
        }
        printf("\n");
    }
    return 0;
}
