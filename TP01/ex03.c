
#include <stdio.h>

int main(void) {
    int i;

    i = 42;
    while (i <= 1337) {
        if (i != 42) {
            printf(" ");
        }
        printf("%d", i);
        i = i + 2;
    }
    printf("\n");
    return 0;
}
