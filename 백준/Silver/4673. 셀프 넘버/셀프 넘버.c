#include <stdio.h>

int d(int i) {
	int sum = i;
	while (i > 0) {
		sum += i % 10;
		i /= 10;
	}
	return (sum);
}

int main() {
	int sn[10001] = {0};
	for (int i = 1; i < 10001; i++) {
		int dn = d(i);
		if (dn < 10001)
			sn[dn] = 1;	
	}

	for (int i = 1; i < 10001; i++)
		if (!sn[i])
			printf("%d\n", i);
	return 0;
}