#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;

    srand(time(NULL));
    n = rand();

    printf("Last digit of %d is ", n);

    int lastDigit = n % 10;

    if (lastDigit > 5) {
        printf("%d and is greater than 5", lastDigit);
    } else if (lastDigit == 0) {
        printf("%d and is 0", lastDigit);
    } else {
        printf("%d and is less than 6 and not 0", lastDigit);
    }

    printf("\n");

    return 0;
}