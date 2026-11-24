#include <stdio.h>

int main(void) {
    int number;
    int i;

    number = 5;
    i = 0;
    while (i < number) {
        printf("%d\n", i);
        i = i + 1;
    }
    return 0;
}