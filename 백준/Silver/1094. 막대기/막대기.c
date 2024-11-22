#include <stdio.h>

int main() {
    int X, count = 0;
    scanf("%d", &X);

    while (X > 0) {
        if (X % 2 == 1) {
            count++;
        }
        X /= 2;
    }

    printf("%d\n", count);
    return 0;
}