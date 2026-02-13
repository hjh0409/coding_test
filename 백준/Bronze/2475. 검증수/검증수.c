#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
 
void num() {
    int a, b, c, d, e;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    printf("%d", (a*a + b*b + c*c + d*d + e*e) % 10);
}

int main() {
    num();
    return 0;
}
