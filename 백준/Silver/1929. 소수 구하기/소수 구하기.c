#include <stdio.h>

int is_prime(int n) {
	if (n <= 1) return 0;
	if (n <= 3) return 1;
	if (n % 2 == 0 || n % 3 == 0) return 0;
	for (int i = 5; i * i <= n; i += 6)
		if (n % i == 0 || n % (i + 2) == 0) return 0;
	return 1;
}

int main() {
	int N, M;
	scanf("%d %d", &M, &N);

	for (int i = M; i <= N; i++) {
		if (is_prime(i)) printf("%d\n", i);
	}
	return 0;
}