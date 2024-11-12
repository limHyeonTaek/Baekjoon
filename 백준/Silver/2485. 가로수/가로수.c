#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int N;
    scanf("%d", &N);

    int trees[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &trees[i]);
    }

    int gaps[N -1];
    for (int i = 0; i < N-1; i++) {
        gaps[i] = trees[i+1] - trees[i];
    }

    int g = gaps[0];
    for (int i = 1; i < N-1; i++) {
        g = gcd(g, gaps[i]);
    }

    int total_trees = (trees[N-1] - trees[0]) / g + 1;
    int additional_trees = total_trees - N;

    printf("%d\n", additional_trees);

    return 0;
}