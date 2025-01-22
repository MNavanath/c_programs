#include<stdio.h>

int main() {
    int num, a = 0, b = 1, temp;
    printf("Enter the number of terms: ");
    scanf("%d", &num);
    if (num >= 1) {
        printf("%d \t", a);
    }
    if (num >= 2) {
        printf("%d \t", b);
    }
    while (num > 2) {
        printf("%d \t", a + b);
        temp = a + b;
        a = b;
        b = temp;
        num--;
    }
    printf("\n");
    return 0;
}
