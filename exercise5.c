#include <stdio.h>
int main() {

    printf("Cyrus L. Jimenez \n");
    printf("BSCS 1-3 \n");

    char _years;
    double salary,bonus;

    printf("Enter the letter that corresponds to the number of years of service. \n");
    printf("A: 0-5 years\nB: 6-10 years\nC: 11-15 years\nD: 16-20 years\nE: More than 20 years\n");
    printf("Letter of choice: ");
    scanf("%c", &_years);
    printf("Input your salary: ");
    scanf("%lf", &salary);

    switch(_years)
    {
        case 'A':
            printf("Your bonus is 20 percent of your salary. \n");
            bonus = salary * 0.20;
            printf("Bonus: %.2lf Php \n", bonus);
            printf("Your total salary bonus: %.2lf Php", salary + bonus);
            break;

        case 'B':
            printf("Your bonus is 25 percent of your salary. \n");
            bonus = salary * 0.25;
            printf("Bonus: %.2lf Php \n", bonus);
            printf("Your total salary bonus: %.2lf Php", salary + bonus);
            break;

        case 'C':
            printf("Your bonus is 30 percent of your salary. \n");
            bonus = salary * 0.30;
            printf("Bonus: %.2lf Php \n", bonus);
            printf("Your total salary bonus: %.2lf Php", salary + bonus);
            break;
        
        case 'D':
            printf("Your bonus is 35 percent of your salary. \n");
            bonus = salary * 0.35;
            printf("Bonus: %.2lf Php \n", bonus);
            printf("Your total salary bonus: %.2lf Php", salary + bonus);
            break;
        
        case 'E':
            printf("Your bonus is 50 percent of your salary. \n");
            bonus = salary * 0.50;
            printf("Bonus: %.2lf Php \n", bonus);
            printf("Your total salary bonus: %.2lf Php", salary + bonus);
            break;
        
        default: 
            printf("Sorry, you have entered an invalid input.");
    }

    return 0;
}