#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n;
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    int count[8001] = {0};
    int sum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
        count[arr[i] + 4000]++;
    }

    qsort(arr, n, sizeof(int), compare);


    double mean = (double)sum / n;
    printf("%d\n", (int)(mean > 0 ? mean + 0.5 : mean - 0.5));

    printf("%d\n", arr[n / 2]);

    int mode = 0;
    int max_count = 0;
    int mode_count = 0;
    
    for (int i = 0; i <= 8000; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
            mode = i - 4000;
            mode_count = 1;
        } else if (count[i] == max_count) {
            if (mode_count == 1) {
                mode = i - 4000;
                mode_count++;
            }
        }
    }
    
    printf("%d\n", mode);

    printf("%d\n", arr[n - 1] - arr[0]);

    free(arr);
    return 0;
}