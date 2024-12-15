#include <stdio.h>
#include <string.h>

#define MAX_LEN 100001
/**
 * 3 3 1 3 (10) 1 2 1 1 1 1 (7)
 */
void count_pipe(char *s, int *res) {
	int stack = 0;

	for (int i = 0; s[i]; i++) {
		if (s[i] == '(') stack++;
		else {
			stack--;
			if (s[i -1] == '(') *res += stack;
			else (*res)++;
		}
	}
}

int main() {
	char arr[MAX_LEN];
	int res = 0;

	scanf("%s", arr);
	count_pipe(arr, &res);
	printf("%d\n", res);
	return 0;
}