#include<stdio.h>

int main() {
    int user;
    printf("Enter the number for multiplication table: ");
    scanf("%d", &user);
    for (int num = 1; num < 11; num++) {
        int table = user * num;
        printf("%d * %d = %d\n", user, num, table);
    }
    return 0;
}
