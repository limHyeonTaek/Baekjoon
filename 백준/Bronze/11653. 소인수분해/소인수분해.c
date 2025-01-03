#include <stdio.h>

void prime_factorization(int n) {
    while (n % 2 == 0) {
        printf("2\n");
        n = n / 2;
    }
    for (int i = 3; i * i <= n; i = i + 2) {
        while (n % i == 0) {
            printf("%d\n", i);
            n = n / i;
        }
    }
    if (n > 2) printf("%d\n", n);
}

int main() {
    int N;
    scanf("%d", &N);
    
    prime_factorization(N);
    
    return 0;
}