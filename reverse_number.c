#include<stdio.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    while (num > 0) {
        printf("%d", num % 10);
        num /= 10;
    }
    printf("\n");
    return 0;
}
