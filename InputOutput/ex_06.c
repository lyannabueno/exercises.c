#include <stdio.h>

int main() {
    int y, a, x, b; /* y = ax + b */

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    y = (a * x) + b;

    printf("The result of %d * %d + %d is %d", a, x, b, y);
}