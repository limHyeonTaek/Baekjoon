#include <stdio.h>

int main() {
	int N, K, cnt = 0;
	scanf("%d %d", &N, &K);
	int money[N];
	for (int i = 0; i < N; i++)
		scanf("%d", &money[i]);
	for (int i = N - 1; i >= 0; i--) {
		cnt += K / money[i];
		K %= money[i];
	}
	printf("%d\n", cnt);
	return 0;
}