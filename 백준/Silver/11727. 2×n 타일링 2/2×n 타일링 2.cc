#include <stdio.h>

int	arr[1001] = {0, 1, 3};

int	dp(int n)
{
	if(arr[n])
		return (arr[n]);
	arr[n] = (dp(n - 1) + dp(n - 2) * 2) % 10007;
	return (arr[n]);
}

int	main(void)
{
	int	N;

	scanf("%d", &N);
	printf("%d", dp(N));
	return (0);
}