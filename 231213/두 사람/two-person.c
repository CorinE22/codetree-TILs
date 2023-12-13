#include <stdio.h>

int main() {
    int a, c;
    char b, d;

    // 두 사람의 정보를 입력받음
    scanf("%d %c", &a, &b);
    scanf("%d %c", &c, &d);

    // 두 조건 중 하나라도 만족하면 1을 출력
    printf("%d", (a >= 19 && b == 'M') || (c >= 19 && d == 'M'));

    return 0;
}