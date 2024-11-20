#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	int count = 0;
    for (int i = 5; N / i >= 1; i *= 5) {
        count += N / i;
    }
	printf("%d\n", count);
	return 0;
}	