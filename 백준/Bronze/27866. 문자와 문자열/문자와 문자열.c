#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 

int main() {
    char S[1001];
    int i;

    scanf("%s %d", S, &i);

    printf("%c", S[i- 1]);


    return 0;
}
/*
1. 요소 1000인 문자열 만들어
2. 일단 S랑 i 스캔에프로 받아
3. 출력하면 되지 않아?
*/