#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
	int a, b, c, d;
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);

	int molecule = (a * d) + (c * b);
	int denominator = (b * d);

	int divisor = gcd (molecule, denominator);
	printf("%d %d\n", molecule / divisor, denominator / divisor);
	return 0;
}