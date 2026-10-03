#include <stdio.h>

int main()
{
    int n, num1 = 0, num2 = 1, nextnum;

    printf("Enter the number of Fibonacci series print: ");
    scanf("%d", &n);

    printf("Fibonacci Series\n");

    for (int i = 1; i <= n; ++i)
    {
        printf("%d\n", num1);

        nextnum = num1 + num2;
        printf("%d\n", nextnum);

        num1 = num2;
        printf("%d\n", num2);

        num2 = nextnum;
    }

    return 0;
}
