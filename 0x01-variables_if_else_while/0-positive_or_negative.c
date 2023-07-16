#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;

    srand(time(NULL));
    n = rand();

    printf("The number %d ", n);
    
    if (n > 0) {
        printf("is positive");
    } else if (n == 0) {
        printf("is zero");
    } else {
        printf("is negative");
    }
    
    printf("\n");
    
    return 0;
}

