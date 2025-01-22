#include<stdio.h>

int main() {
    int inum;
    printf("These are even numbers between 1 and 50: \n");
    for (inum = 1; inum < 51; inum++) {
        if (inum % 2 == 0) {
            printf("%d \n", inum);
        }
    }
    return 0;
}
