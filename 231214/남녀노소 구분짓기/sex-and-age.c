#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    if(a == 0)
    {
        if(b>=19)
            printf("MAN");
        else
            printf("BOY");
    }

    if(a == 1)
    {
        if(b>=19)
            printf("WOMAN");
        else
            printf("GIRL");
    }
    return 0;
}