#include<stdio.h>

int main() {
    int num, po, result = 1;
    printf("Enter the base number and exponent: ");
    scanf("%d %d", &num, &po);
    for (int i = 1; i <= po; i++) {
        result *= num;
    }
    printf("%d raised to the power of %d is %d\n", num, po, result);
    return 0;
}
