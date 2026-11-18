#include <stdio.h>

int main(void) {
    int number;

    number = 8;
    if (number % 2 == 0) {
        printf("pair\n");
    } else {
        printf("impair\n");
    }
    return 0;
}