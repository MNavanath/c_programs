#include<stdio.h>

int main() {
    int check, num = 1;
    for (int j = 1; j <= 25; j++) {
        check = 0;
        num++;
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                check = 1;
                break;
            }
        }
        if (!check) {
            printf("%d\n", num);
        }
    }
    return 0;
}
