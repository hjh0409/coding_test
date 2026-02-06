#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 

int main() {
    int A, B;
    long long T;
    scanf("%lld", &T);
    for(int i=0;i<T;i++){
        scanf("%d %d", &A, &B);
        printf("%d\n", A + B);
    }
    
}
/*
1.N값을 받아
2. 받아서 반복문돌려
*/