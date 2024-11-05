#include <stdio.h>
#include <string.h>

int main() {
	char str[101];
	scanf("%s", str);
	int cnt = 0;

	for (int i = 0; i < strlen(str); i++) {
        cnt++;
        
        if (str[i] == 'c' && (str[i+1] == '=' || str[i+1] == '-')) {
            i++;
        } else if (str[i] == 'd' && str[i+1] == 'z' && str[i+2] == '=') {
            i += 2;
        } else if (str[i] == 'd' && str[i+1] == '-') {
            i++;
        } else if ((str[i] == 'l' || str[i] == 'n') && str[i+1] == 'j') {
            i++;
        } else if ((str[i] == 's' || str[i] == 'z') && str[i+1] == '=') {
            i++;
        }
    }

	printf("%d\n", cnt);
    return 0;
}