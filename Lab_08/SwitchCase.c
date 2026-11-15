#include <stdio.h>

int main() {
    char op;
    int a, b;

    printf("my name is Shivam Deshmukh solve question 21/n ");
    printf("Operator dalo (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Do numbers dalo: ");
    scanf("%d %d", &a, &b);

    switch (op) {
        case '+':
            printf("Sum = %d", a + b);
            break;
        case '-':
            printf("Sub = %d", a - b);
            break;
        case '*':
            printf("Mul = %d", a * b);
            break;
        case '/':
            printf("Div = %d", a / b);
            break;
        default:
            printf("Galat operator");
    }

    return 0;
}
