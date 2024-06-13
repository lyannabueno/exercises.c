#include <stdio.h>

int main() {
    char license_plate[8], color[15];
    int year;

    printf("Write the car's license plate: ");
    scanf("%s", license_plate);

    while (getchar() != '\n');

    printf("Write the car's color: ");
    fgets(color, 15, stdin);

    printf("Write the car's year: ");
    scanf("%4d", &year);

    printf("\nThe car's information is:\nlicense plate: %.7s\ncolor: %.14syear: %d\n\n", license_plate, color, year);
}