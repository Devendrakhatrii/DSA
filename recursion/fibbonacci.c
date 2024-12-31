#include <stdio.h>

int fibbo(int n)
{
    if (n <= 1)
        return n;

    return fibbo(n - 1) + fibbo(n - 2);
}

int main()
{
    int num;
    printf("Enter number:");
    scanf("%d", &num);
    printf("%d\n", fibbo(num));
    return 0;
}