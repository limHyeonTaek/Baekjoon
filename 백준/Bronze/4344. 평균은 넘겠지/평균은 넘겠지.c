#include <stdio.h>

int	main(void)
{
	int n;
	scanf("%d", &n);

	while (n--) {
		int sn;
		int cnt = 0;
		scanf("%d", &sn);
		int arr[sn];
		double total = 0, average;
		for (int i = 0; i < sn; i++) {
			scanf("%d", &arr[i]);
			total += arr[i];
		}
		average = total / sn;
		for (int i = 0; i < sn; i++)
			if (arr[i] > average)
				cnt++;
		printf("%.3lf%%\n", ((double)cnt / sn * 100));
	}
	return (0);
}