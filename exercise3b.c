#include <stdio.h>
int main() {

    printf("Cyrus L. Jimenez \n");
    printf("BSCS 1-3 \n");

    int number;
    float charge;

    printf("Please enter the number of text messages incurred: ");
    scanf("%d", &number);

    if ((number >= 0) && (number <= 200)) {
        printf("Number of text messages entered: %d \n", number);
        printf("Your text messaging charge: 0.00 Php \n");
        printf("First 200 messages is free of charge.\n");
        printf("Additional 0.5 Php fee per message will be charged once you exceed 200 text messages.");
    }
    else if (number > 200) {
        printf("Number of text messages entered: %d \n", number);
        charge = (number-200) * 0.5;
        printf("Your text messaging charge: %.1f Php \n", charge);
        printf("%.1f Php will be deducted to your balance. \n", charge);
        printf("First 200 messages is free of charge.");
    }
    else {
        printf("You have entered an invalid number.");
    }

    return 0;
}