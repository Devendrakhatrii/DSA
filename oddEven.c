#include <stdio.h>
int main()
{
    int num;
    printf("enter a number");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("num is even");
    }
    else if (num == 0)
    {
        printf("num is zero");
    }
    else
    {
        printf("%d is odd", num);
    }
    return 0;
}