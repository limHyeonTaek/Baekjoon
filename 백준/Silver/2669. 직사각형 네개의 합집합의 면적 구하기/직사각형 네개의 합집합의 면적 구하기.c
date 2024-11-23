#include <stdio.h>

#define MAX 100

int main() {
    int map[MAX][MAX] = {0};
    int x1, y1, x2, y2;
    int area = 0;

    for (int i = 0; i < 4; i++) {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        for (int x = x1; x < x2; x++)
            for (int y = y1; y < y2; y++)
    			map[y][x] = 1;
    }

    for (int i = 0; i < MAX; i++)
        for (int j = 0; j < MAX; j++)
            if (map[i][j]) area++;
    printf("%d\n", area);
    return 0;
}