#include <stdio.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    char arr[50][50];
    for (int i = 0; i < N; i++) {
        scanf("%s", arr[i]);
    }
    int res = 64;
    for (int i = 0; i <= N - 8; i++) {
        for (int j = 0; j <= M - 8; j++) {
            int w = 0, b = 0;
            for (int x = 0; x < 8; x++) {
                for (int y = 0; y < 8; y++) {
                    char start_w = ((x + y) % 2 == 0) ? 'W' : 'B';
                    char start_b = ((x + y) % 2 == 0) ? 'B' : 'W';
                    if (arr[i + x][j + y] != start_w) w++;
                    if (arr[i + x][j + y] != start_b) b++;
                }
            }
            res = MIN(res, MIN(w, b));
        }
    }
    printf("%d\n", res);
    return 0;
}