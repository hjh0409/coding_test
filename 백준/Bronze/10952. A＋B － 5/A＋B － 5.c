#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b;
	while (1) {
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0)
			break;
		printf("%d\n", a + b);
		
	}
	return 0;
}

/*
1.무한루프로 a b 를 각각 받아서 결과값을 출력한다
2.a b 가 둘다 0일때 프로그램 종료

*/