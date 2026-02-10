#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
 

int main() {
    char str[1001];
    int n;
    
    scanf("%d",&n);
    getchar();
   
    for (int i = 0; i < n; i++) {
        int m = 0;
        fgets(str, sizeof(str), stdin);
        printf("%c",str[0]);
        for (int j = 0; str[j] != '\0'; j++) {
            m++;
        }
        printf("%c\n", str[m-2]);
    }

    return 0;
}
