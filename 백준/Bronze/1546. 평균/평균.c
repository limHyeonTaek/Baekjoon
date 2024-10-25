#include<stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);

	double arr[n];
	double max = 0;

	for (int i = 0; i < n; i++) {
		scanf("%lf", &arr[i]);
		if (max < arr[i])
			max = arr[i];
	}
	double total = 0;

	for (int i = 0; i < n; i++)
		total += (double)((arr[i] / max) * 100);
	
	double average = total / n;
	printf("%lf\n", average);
}