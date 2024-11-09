#include<stdio.h>

int gcd(int max, int min) {
	if (min == 0)
		return max;
	else
		return gcd(min, max % min);
}

int main() {
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		int a,b,min,max;
		scanf("%d %d", &a, &b);
		
		(a > b) ? (max = a, min = b) : (max = b, min = a);
		printf("%d\n", (min * max) / gcd(max, min));
	}
	return 0;
}