# Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main() {
    float a, b, temp;

    printf("Enter first number (a): ");
    scanf("%f", &a);
    printf("Enter second number (b): ");
    scanf("%f", &b);

    // Swapping using a third variable
    temp = a;
    a = b;
    b = temp;

    printf("After swapping:\n");
    printf("First number (a): %.2f\n", a);
    printf("Second number (b): %.2f\n", b);

    return 0;
}
