#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 

int main() {
    int n, v,result=0;

    int a[100] = { 0 };

    scanf("%d\n",&n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d",&a[i]);
    }
    scanf("%d",&v);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == v)
            result += 1;
            
    }
    printf("%d", result);

}
/*
배열을 요소 100개로 만들어 
스캔 f 로 숫자 받아서
돌리면 되겠네
*/