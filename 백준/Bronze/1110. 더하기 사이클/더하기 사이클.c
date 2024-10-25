#include <stdio.h>

int main(void) {
	int cnt = 0;
	int n, ten, one, res, origin;

	scanf("%d", &n);
	origin = n;
	one = n % 10;
	ten = n / 10;
	n = (one * 10) + ((one + ten) % 10);
	cnt++;
	while (n != origin) {
		one = n % 10;
		ten = n / 10;
		n = (one * 10) + ((one + ten) % 10);
		cnt++;
	}
	printf("%d\n", cnt);
}