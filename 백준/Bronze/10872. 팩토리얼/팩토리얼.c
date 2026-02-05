#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,fac=1;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		fac *= i;
	}
	printf("%d", fac);
	return 0;
}