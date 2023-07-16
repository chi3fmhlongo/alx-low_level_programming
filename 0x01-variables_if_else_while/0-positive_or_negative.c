#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;

    srand(time(NULL));
    n = 98;

    printf("%d is ", n);

    if (n > 0) {
        printf("positive");
    } else if (n < 0) {
        printf("negative");
    } else {
        printf(0);
    }

    printf("\n");

    return 0;
}
