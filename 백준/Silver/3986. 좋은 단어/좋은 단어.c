#include <stdio.h>
#include <string.h>

#define MAX_LEN 100001

int is_good_word(char *s) {
    int top = -1;
    char stack[MAX_LEN];
    
    for (int i = 0; s[i]; i++) {
        if (top == -1 || stack[top] != s[i])
            stack[++top] = s[i];
        else top--;
    }
    return top == -1;
}

int main() {
    int N, count = 0;
    char word[MAX_LEN];
    
    scanf("%d", &N);
    while (N--) {
        scanf("%s", word);
        if (is_good_word(word))
            count++;
    }
    printf("%d\n", count);
    return 0;
}
