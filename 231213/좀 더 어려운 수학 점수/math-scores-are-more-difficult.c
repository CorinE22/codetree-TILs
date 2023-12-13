#include <stdio.h>

int main() {
    int a, b, c, d;
    
    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);
    if(a > c)
        printf("A");
    else if(a == c && b > d)
        printf("A");
    else
        printf("B");
        return 0;
}