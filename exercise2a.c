#include <stdio.h>
int main() {

    printf("Cyrus L. Jimenez \n");
    printf("BSCS 1-3 \n");

    int number;

    printf("Enter day number from 1-7 (1 = Monday, 7 = Sunday): ");
    scanf("%d", &number);

    if ((number <= 5) && (number >= 1)) {
        printf("WEEKDAY");
    }
    else {
        printf("WEEKEND");
    }

    return 0;
}