#include<stdio.h>

int main() {
    int sum = 0, num, temp, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0) {
        rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }
    if (sum == num) {
        printf("Number is an Armstrong number\n");
    } else {
        printf("Number is not an Armstrong number\n");
    }
    return 0;
}
