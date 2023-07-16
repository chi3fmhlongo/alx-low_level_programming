#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;

    srand(time(NULL));
    n = rand() % 199 - 99;

    printf("The number %d is ", n);

    if (n > 0) {
        printf("positive");
    } else if (n < 0) {
        printf("negative");
    } else {
        printf("zero");
    }

    printf("\n");

    return 0;
}
