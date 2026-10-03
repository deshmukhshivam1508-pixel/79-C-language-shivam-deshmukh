#include <stdio.h>

int main()
{
    int a = 10;
    int b = 5;
    int c = 16;

    printf("My name is Shivam Deshmukh solve Question 13\n");
    
    if (a > b)
    {
        if (a > c)
        {
            printf("%d is largest", a);
        }
        else
        {
            printf("%d is largest", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("%d is largest", b);
        }
        else
        {
            printf("%d is largest", c);
        }
    }

    return 0;
}
