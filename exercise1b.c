#include <stdio.h>
int main() {

    printf("Cyrus L. Jimenez \n");
    printf("BSCS 1-3 \n");

    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 < num2) {
        printf("NUMBER1 IS SMALLER");
    }
    if (num1 > num2) {
        printf("NUMBER2 IS SMALLER");
    }
    if (num1 == num2) {
        printf("NUMBER1 AND NUMBER2 ARE EQUAL");
    }

    return 0;
}