#include <stdio.h>

#define MAX 100000

int stack[MAX];
int top = -1;

void push(int value) {
    stack[++top] = value;
}

void pop() {
    if (top >= 0)
        top--;
}

int main() {
    int n, current = 1, possible = 1;
    int sequence[MAX];
    char result[MAX * 2] = {0};
    int resultIndex = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &sequence[i]);
    for (int i = 0; i < n; i++) {
        int target = sequence[i];
        while (current <= target) {
            push(current++);
            result[resultIndex++] = '+';
        }
        if (stack[top] == target) {
            pop();
            result[resultIndex++] = '-';
        } else {
            possible = 0;
            break;
        }
    }
    if (possible)
        for (int i = 0; i < resultIndex; i++)
            printf("%c\n", result[i]);
    else printf("NO\n");
    return 0;
}
