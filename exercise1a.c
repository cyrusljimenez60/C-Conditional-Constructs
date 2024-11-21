#include <stdio.h>
int main() {

    printf("Cyrus L. Jimenez \n");
    printf("BSCS 1-3 \n");
    
    double number;

    printf("Enter a number: ");
    scanf("%lf", &number);
    
    if (number < 0) {
        printf("NEGATIVE");
    }
    if (number > 0) {
        printf("POSITIVE");
    }

    char a;
    scanf(" %c", &a);
    return 0;
}
