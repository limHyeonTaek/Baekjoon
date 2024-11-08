#include <stdio.h>
#include <string.h>

int is_palindrome(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char num[6]; 
    while (1) {
        scanf("%s", num);
        
        if (strcmp(num, "0") == 0) {
            break;
        }
        
        if (is_palindrome(num)) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }

    return 0;
}