#include <stdio.h>

int main() {
    char name[21], category[16], producer[31];

    printf("Enter the name of the movie: ");
    scanf("%[^\n]", name);
    fflush(stdin);

    while (getchar() != '\n');

    printf("Enter the category of the movie: ");
    scanf("%[^\n]", category);
    fflush(stdin);

    while (getchar() != '\n');

    printf("Enter the producer of the movie: ");
    scanf("%[^\n]", producer);
    fflush(stdin);

    printf("\nThe final information is:\nname: %.20s\ncategory: %.15s\nproducer: %.30s\n\n", name, category, producer);
}