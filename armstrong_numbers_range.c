#include<stdio.h>

int main() {
    int sum, temp;
    for (int i = 1; i <= 1000; i++) {
        sum = 0;
        temp = i;
        while (temp != 0) {
            sum += (temp % 10) * (temp % 10) * (temp % 10);
            temp /= 10;
        }
        if (sum == i) {
            printf("%d\n", i);
        }
    }
    return 0;
}
