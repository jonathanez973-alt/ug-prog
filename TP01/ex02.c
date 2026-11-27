#include <unistd.h>

int main(void) {
    int number;
    int i;

    number = -1;
    i = 0;
    while (i < number) {
        write(1, "Jonathan\n", 9);
        i = i + 1;
    }
    return 0;
}