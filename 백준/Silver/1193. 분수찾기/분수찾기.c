#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);

    int x = 1, y = 1;
    int direction = 1;
    for (int i = 1; i < X; i++) {
        if (direction == 1) {
            if (y == 1) {
                x++;
                direction = -1;
            } else {
                x++;
                y--;
            }
        } else {
            if (x == 1) {
                y++;
                direction = 1;
            } else {
                x--;
                y++;
            }
        }
    }

    printf("%d/%d\n", y, x);
    return 0;
}