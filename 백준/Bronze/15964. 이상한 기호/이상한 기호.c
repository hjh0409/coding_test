#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
 
void gol() {
    int a, b;
    scanf("%d %d",&a,&b);
    printf("%d\n",(a + b) * (a - b));
}

int main() {
    gol();
    return 0;
}
