#include <stdio.h>

int main() {
	int N, result = 0, tmp = 0;
	scanf("%d", &N);
	int arr[1001] = {0};

	for (int i = 0; i < N; i++) {
		int num =0;
		scanf("%d", &num);
		arr[num]++;
	}

	for (int i = 1; i <= 1000; i++) {
		for (int j = 0; j < arr[i]; j++) {
			tmp += i;
			result += tmp;
		}
	}
	printf("%d\n", result);
}