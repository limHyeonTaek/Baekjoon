#include <stdio.h>

int N, M;
int arr[8];
int used[8 + 1];

void printnum(int k) {
	if (k == M) {
		for (int i = 0; i < M; i++) 
			printf("%d ", arr[i]);
		printf("\n");
		return ;
	}

	for (int i = 1; i <= N; i++) {
		if (!used[i]) {
			used[i] = 1;
			arr[k] = i;
			printnum(k + 1);
			used[i] = 0;
		}
	}

}

int main() {

    scanf("%d %d", &N, &M);

	printnum(0);

    return 0;
}