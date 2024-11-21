#include <stdio.h>

#define MAX 30

int main() {
    int T, N, M;
    int dp[MAX + 1][MAX + 1];
	
    for (int i = 1; i <= MAX; i++) {
        dp[i][0] = dp[i][i] = 1;
        for (int j = 1; j < i; j++) {
            dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
        }
    }
    
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &N, &M);
        printf("%d\n", dp[M][N]);
    }
    
    return 0;
}