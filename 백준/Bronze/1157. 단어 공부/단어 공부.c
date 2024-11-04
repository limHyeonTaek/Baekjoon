#include <stdio.h>
#include <ctype.h>

int ft_sl(char *s) {
	int i = 0;

	while (s[i])
		i++;
	return i;
}

int main() {
	char str[1000001];
	int cnt[26] = {0};
	int max_cnt = 0;
	char max_char = '?';

	scanf("%s", str);
	int len = ft_sl(str);

	for (int i = 0; i < len; i++) {
		int index = toupper(str[i]) - 'A';
		cnt[index]++;

		if (cnt[index] > max_cnt) {
			max_cnt = cnt[index];
			max_char = 'A' + index;
		} else if (cnt[index] == max_cnt) max_char = '?';
	}
	printf("%c\n", max_char);
	return 0;
}
