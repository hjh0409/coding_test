#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
 
void gol() {
    long long a, b;
    scanf("%lld %lld",&a,&b);
    printf("%lld\n",(a + b) * (a - b));
}

int main() {
    gol();
    return 0;
}
