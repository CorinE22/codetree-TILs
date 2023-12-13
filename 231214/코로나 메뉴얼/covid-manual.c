#include <stdio.h>

int main() {
    int a1, a2, a3;
    char c1, c2, c3;

    scanf("%c %d", &c1, &a1);
    scanf("%c %d", &c2, &a2);
    scanf("%c %d", &c3, &a3);

    if(c1 == 'Y' && a1>=37)
        {
            if((c2 == 'Y' && a2 >= 37) || (c3 == 'Y' && a3 >= 37))
                printf("E");
            else
                printf("N");
        }
    else
        {
            if((c2 == 'Y' && a2 >= 37) && (c3 == 'Y' && a3 >= 37))
                printf("E");
            else    
                printf("N");
        }
    
    return 0;
}