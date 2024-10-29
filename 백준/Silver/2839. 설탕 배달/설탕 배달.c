#include <stdio.h>

int main() {
	int N, cnt = 0;
	scanf("%d", &N);

	while (N >= 0) {
		if (N % 5 == 0) {
			cnt += N / 5;
			printf("%d\n", cnt);
			return (0);
		}
		N -= 3;
		cnt++;
	}
	printf("-1\n");
	return (0);
}