#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
 

int main() {
    char str[1001];
    int n;
    scanf("%d", &n);
    
        
        for (int i = 0; i < n; i++) {
            scanf("%s", str);
            int m;
            m = strlen(str);
            printf("%c%c\n", str[0], str[m - 1]);
    }
    

    return 0;
}
