#include <stdio.h>

int main() {
    int a, c;
    char b, d;

    scanf("%d%c", &a, &b);
    scanf("%d%c", &c, &d);

    printf("%d", (a>=19 || c>=19)&& (b == 'M' || d == 'M'));

    return 0;
}