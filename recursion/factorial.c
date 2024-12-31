#include <stdio.h>

int fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}

int main()
{
    int num;
    printf("Enter number:");
    scanf("%d", &num);
    printf("%d\n", fact(num));
    return 0;
}