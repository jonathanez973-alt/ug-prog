#include <stdio.h>

int main(void) {
    int age;

    age = 61;
    if (age <= 1) {
        printf("bonjour bebe !\n");
    } else if (age <= 14) {
        printf("bonjour mes petits !\n");
    } else if (age <= 30) {
        printf("bonjour jeune homme !\n");
    } else if (age <= 60) {
        printf("bonjour monsieur !\n");
    } else {
        printf("bonjour papy !\n");
    }
    return 0;
}