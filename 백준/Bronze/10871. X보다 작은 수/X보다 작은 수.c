#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 

int main() {
    int n, x;
    scanf("%d %d",&n,&x);
    
    int A[10000] = { 0 };
    for (int i = 0; i < n; i++) {
        int a;        scanf("%d",&a);
        A[i] = a;
    }
    for (int i = 0; i < n; i++)
    {
        if (A[i] < x) {
            printf("%d ", A[i]);
        }
    }
}
/*
1.N이랑 X값 받고

2.반복문으로 수열 10개 입력 받고 만들어 그리고 x값은 대기

3.반복문으로 숫자 비교
*/