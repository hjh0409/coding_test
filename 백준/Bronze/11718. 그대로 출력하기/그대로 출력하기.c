#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
 

int main() {
    char str[100];

    while (fgets(str, sizeof(str), stdin) !=NULL) 
    printf("%s", str);
    

    return 0;
}
