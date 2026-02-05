#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	long n;
	scanf("%ld", &n);

	for (int i = 1; i <= n; i++) {
		printf("%ld\n", i);
	}
	return 0;
}