#include <stdio.h>

int main() {
    int n = 98;
    const char* messages[] = { "negative", "zero", "positive" };

    printf("%d is %s\n", n, messages[n < 0 ? 0 : (n > 0 ? 2 : 1)]);

    n = -98;
    printf("%d is %s\n", n, messages[n < 0 ? 0 : (n > 0 ? 2 : 1)]);

    n = 0;
    printf("%d is %s\n", n, messages[n < 0 ? 0 : (n > 0 ? 2 : 1)]);

    return 0;
}
