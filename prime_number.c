#include<stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int flag = 0;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            printf("Number is not a prime number\n");
            flag = 1;
            break;
        }
    }
    if (!flag) {
        printf("Number is a prime number\n");
    }
    return 0;
}
