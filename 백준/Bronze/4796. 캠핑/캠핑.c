#include <stdio.h>

int main() {
	int L, P, V;
	int cnt = 1;
	while (1) {
		scanf("%d %d %d", &L, &P, &V);
		if (L == 0 && P == 0 && V ==0) break;
	int n =	0;
	n += (V / P) * L;
	n += (V % P < L) ? (V % P) : L;
	printf("Case %d: %d\n", cnt++, n);
	}
	return 0;
}