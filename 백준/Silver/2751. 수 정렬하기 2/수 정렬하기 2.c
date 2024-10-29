#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[2000001] = {0};

    for(int i = 0; i < n; i++) {
        int num; 
        scanf("%d", &num);
        arr[num + 1000000] = 1;
    }

    for (int i = 0; i <= 2000000; i++) {
        if (arr[i] == 1) {
            printf("%d\n", i - 1000000);
        }
    }
    
    return 0;
}