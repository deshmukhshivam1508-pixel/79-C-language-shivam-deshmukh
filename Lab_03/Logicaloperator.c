#include <stdio.h> 

 int main()
{
    int a = 10;
    int b = 20;

    printf("(a < b) && (a != b) = %d", (a < b) && (a != b));
   
    printf("(a > b) || (a != b) = %d", (a > b) || (a != b));
   
    printf("!(a < b) = %d", !(a < b));

    return 0;
}
