#include <stdio.h>
int main() {

    printf("Cyrus L. Jimenez \n");
    printf("BSCS 1-3 \n");

    int number;

    printf("Input day in numeric form: ");
    scanf("%d", &number);

    if (number == 1) {
        printf("That day is a Monday \n");
    }
    else if (number == 2) {
        printf("That day is a Tuesday \n");
    }
    else if (number == 3) {
        printf("That day is a Wednesday \n");
    }
    else if (number == 4) {
        printf("That day is a Thursday \n");
    }
    else if (number == 5) {
        printf("That day is a Friday \n");
    }
    else if (number == 6) {
        printf("That day is a Saturday \n");
    }
    else if (number == 7) {
        printf("That day is a Sunday \n");
    }
    else {
        printf("INVALID INPUT \n");
    }

    printf("Have a nice day!");

    return 0;
}