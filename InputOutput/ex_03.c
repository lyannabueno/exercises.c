#include <stdio.h>

int main() {
    int num1, num2, subtraction;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        subtraction = num1 - num2;
        printf("\nThe subtraction between %d and %d is %d\n\n", num1, num2, subtraction);
    } else {
        subtraction = num2 - num1;
        printf("\nThe subtraction between %d and %d is %d\n\n", num2, num1, subtraction);
    }
}
