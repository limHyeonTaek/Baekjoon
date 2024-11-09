#include<stdio.h>

int gcd(int max, int min) {
	if (min == 0)
		return max;
	else
		return gcd(min, max % min);
}

int main() {
	long long a,b,min,max;
	scanf("%lld %lld", &a, &b);
	(a > b) ? (max = a, min = b) : (max = b, min = a);
	printf("%lld\n", (min * max) / gcd(max, min));
	return 0;
}