#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 1) {
        printf("BUKAN\n");
        return 0;
    }

    if (n <= 3) {
        printf("PRIMA\n");
        return 0;
    }

    if (n % 2 == 0 || n % 3 == 0) {
        printf("BUKAN\n");
        return 0;
    }

    int limit = (int)sqrt(n);
    for (int i = 5; i <= limit; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            printf("BUKAN\n");
            return 0;
        }
    }

    printf("PRIMA\n");
    return 0;
}