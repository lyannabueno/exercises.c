#include <stdio.h>

int main() {
    int num1, num2, num3, num4, sum, average;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);

    printf("Enter the fourth number: ");
    scanf("%d", &num4);

    sum = num1 + num2 + num3 + num4;
    average = sum / 4;
    printf("The final average is %d", average);
}
