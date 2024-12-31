#include <stdio.h>
int main()
{
    int a = 1, b = 1, c, i;
    printf("%d\t", a);
    printf("%d\t", b);
    for (i = 1; i <= 10; i++)
    {
        c = a + b;
        printf("%d \t", c);
        a = b;
        b = c;
    }
    return 0;
}