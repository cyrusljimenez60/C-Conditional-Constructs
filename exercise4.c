#include <stdio.h>
int main () {

    printf("Cyrus L. Jimenez \n");
    printf("BSCS 1-3 \n");

    int day, time, duration;
    float charge;

    printf("Please enter the following information below. \n");
   
    printf("Day of call in numeric form (1 = Monday, 7 = Sunday): "); 
    scanf("%d", &day);
    
    printf("Call starting time (in 24 hour format): ");
    scanf("%d", &time);

    printf("Duration of the call (in minutes): ");
    scanf("%d", &duration);

    if ((day >= 1) && (day <= 5)) {
        if ((time >= 6) && (time <= 18)) {
            printf("Day rate: Weekday \n", day);
            printf("Call time: %d \n", time);
            printf("Charge rate: 2.50 Php/minute \n");
            printf("Minutes of call: %d minute/s (Calls are rounded to the next minute) \n", ++duration);
            charge = (duration) * 2.50;
            printf("Total billing charge: %.2f Php", charge); 
        }
        else {
            printf("Day rate: Weekday \n", day);
            printf("Call time: %d \n", time);
            printf("Charge rate: 2.00 Php/minute \n");
            printf("Minutes of call: %d minute/s (Calls are rounded to the next minute) \n", ++duration);
            charge = (duration) * 2.00;
            printf("Total billing charge: %.2f Php", charge); 
        }
    }
    else {
        printf("Day rate: Weekend \n", day);
        printf("Call time: %d \n", time);
        printf("Charge rate: 1.50 Php/minute \n");
        printf("Minutes of call: %d minute/s (Calls are rounded to the next minute) \n", ++duration);
        charge = (duration) * 1.50;
        printf("Total billing charge: %.2f Php", charge); 
    }

    return 0;
}