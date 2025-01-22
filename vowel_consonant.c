#include<stdio.h>

int main() {
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    switch (ch) {
        case 'a':
        case 'A':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'U':
        case 'u':
            printf("It is a vowel\n");
            break;
        default:
            printf("It is a consonant\n");
    }
    return 0;
}
