#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 

int main() {
    char score[3];
    float point;
    
    scanf("%s",score);

    if (score[0] =='A') {
        point = 4.0;
    }
    else if (score[0] == 'B') {
        point = 3.0;
    }
    else if (score[0] == 'C') {
        point = 2.0;
    }
    else if (score[0] == 'D') {
        point = 1.0;
    }
    else {
        point = 0.0;
    }

    if (score[1] == '+') {
        point+=0.3;
    }
    else if (score[1] == '-') {
        point-=0.3;
    }
    else if (score[1] == 0) {
        point = 0.0;
    }
    printf("%.1f", point);
    return 0;
}
/*
1. 스코어 변수 만들고 grade 만들어 그리고 
*/