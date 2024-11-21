#include <stdio.h>
int main() {

    printf("Cyrus L. Jimenez \n");
    printf("BSCS 1-3 \n");

    char letter;

    printf("Enter a letter: ");
    scanf("%c", &letter);

    if ((letter >= 'a') && (letter <= 'z')) {
        printf("LOWERCASE");
    }
    else {
        printf("UPPERCASE");
    }

    return 0;
}