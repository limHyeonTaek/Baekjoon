#include <stdio.h>

int main() {
	int N, result = 0;
	scanf("%d", &N);

	if (N < 100)
		result = N;
	else {
		result = 99;
		for (int i = 100; i <= N; i++)
		{
			int a = i / 100;
			int b = (i / 10) % 10;
			int c = i % 10;
			if ((b - a) == (c - b))
				result++;
		}
	}
	printf("%d\n", result);
	return 0;
}
