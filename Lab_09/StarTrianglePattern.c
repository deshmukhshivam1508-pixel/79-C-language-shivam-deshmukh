
#include <stdio.h>

int main()
{
    int i, j, n;

    printf("my name is Shivam Deshmukh solve question 22\n ");
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
