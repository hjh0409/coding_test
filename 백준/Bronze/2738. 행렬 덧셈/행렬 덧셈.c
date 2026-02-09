#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 

int main() {
    int list[100][100];
    int list2[100][100];
    int a, b;
    scanf("%d %d", &a, &b);

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            scanf("%d", &list[i][j]);
        }
    }
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            scanf("%d", &list2[i][j]);
        }
    }
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("%d ", list[i][j] + list2[i][j]);
        }
        printf("\n");
    }
}
/*
일단 배열의 요소를 30으로
for과 스캔으로 넣어 출석번호

for과 이프문으로 비교후 잇으면 내뚜고 없으면 출력

*/