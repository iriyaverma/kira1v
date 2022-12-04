#include <stdio.h>
int main()
{
    int a = 11, b = 16, c = 24, d = 20;

    // logical AND example
    if (a > b && c == d)
        printf("a > b AND c = d\n");
    else
        printf("AND condition not satisfied\n");

    // logical OR example
    if (a > b || c == d)
        printf("a > b OR c = d\n");
    else
        printf("Neither a > b nor c = d\n");

    // logical NOT example
    if (!a)
        printf("a is zero\n");
    else
        printf("a is not zero");

    return 0;
}
