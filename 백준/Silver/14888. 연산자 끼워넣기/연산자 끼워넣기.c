#include <stdio.h>

int max = -2147483648;
int min = 2147483647;
int num[11];
int op[4];
int n;

void	operation(int idx, int cur) {
	if (idx == n - 1) {
		if (cur > max) max = cur;
		if (cur < min) min = cur;
		return ;
	}

	for (int i = 0; i < 4; i++) {
		if (op[i] > 0) {
			op[i]--;
			int res = cur;

			if (i == 0) res += num[idx + 1];
			else if (i == 1) res -= num[idx + 1];
			else if (i == 2) res *= num[idx + 1];
			else if (i == 3) {
				if (cur < 0 && num[idx + 1] > 0)
					res = -((-cur) / num[idx + 1]);
				else if (cur > 0 && num[idx + 1] < 0)
					res = -(cur / (-num[idx + 1]));
				else
					res = cur / num[idx + 1];
			}
			operation(idx + 1, res);
			op[i]++;
		}
	}
}

int	main(void)
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}

	for (int i = 0; i < 4; i++)
	{
		scanf("%d", &op[i]);
	}

	operation(0, num[0]);
	printf("%d\n", max);
	printf("%d\n", min);
	return (0);
}