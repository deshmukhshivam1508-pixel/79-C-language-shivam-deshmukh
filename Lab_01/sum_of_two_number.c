#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Ask the user for input
    printf("Enter two integers: ");
    
    // Read and store the two integers
    // The & symbol gets the memory address of the variables
    scanf("%d %d", &num1, &num2);

    // Add the two numbers using the + operator
    sum = num1 + num2;

    // Display the final result
    printf("%d + %d = %d\n", num1, num2, sum);

    return 0;
}
