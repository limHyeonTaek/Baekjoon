#include <stdio.h>
#include <string.h>

#define MAX_LEN 31

int operation(char *s) {
	char stack[MAX_LEN] = {0};
	int top = -1, res = 0, tmp = 1;

	for (int i = 0; s[i]; i++) {
		if (s[i] == '(') {
			stack[++top] = s[i];
			tmp *= 2;
		} else if (s[i] == '[') {
			stack[++top] = s[i];
			tmp *= 3;
		} else if (s[i] == ')') {
			if (top == -1 || stack[top] != '(') return 0;
			if (s[i - 1] == '(') res += tmp;
			tmp /= 2;
			top--;
		} else if (s[i] == ']') {
			if (top == -1 || stack[top] != '[') return 0;
			if (s[i - 1] == '[') res += tmp;
			tmp /= 3;
			top--;
		}
	}
	if (top != -1) res = 0;
	return res;
}

int main() {
	char arr[MAX_LEN];
	int res = 0;

	scanf("%s", arr);
	res = operation(arr);
	printf("%d\n" ,res);
	return 0;
}