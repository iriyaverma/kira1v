#include "stdio.h"
int main()
{
    int a = 7, b = 5;
    printf("bitwise AND output=%d", a & b);
    printf("\nbitwise OR output=%d", a | b);
    printf("\nbitwise Exclusive OR output=%d", a ^ b);
    printf("\nbitwise Shift left output=%d", a << b);
    printf("\nbitwise Shift right output=%d", a >> b);
    return 0;
}
