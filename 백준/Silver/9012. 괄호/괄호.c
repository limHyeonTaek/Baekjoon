#include <stdio.h>
#include <string.h>

int is_vps(char *str) {
    int top = 0;
    int len = strlen(str);
    
    for (int i = 0; i < len; i++) {
        if (str[i] == '(') {
            top++;
        } else if (str[i] == ')') {
            if (top == 0) return 0;
            top--;
        }
    }
    
    return (top == 0);
}

int main() {
    int T;
    char str[50 + 1];
    
    scanf("%d", &T);
    
    while (T--) {
        scanf("%s", str);
        
        if (is_vps(str)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}