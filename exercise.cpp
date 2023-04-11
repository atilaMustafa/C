// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>

#define FIXED_COST_MEMBER 1.5
#define FIXED_COST_NON_MEMBER 3.0
#define HOURLY_RATE_1 2.0
#define HOURLY_RATE_2 1.5
#define HOURLY_RATE_3 1.0
#define HOURLY_RATE_4_OR_MORE 0.5

int main() {
    int num_drivers = 0;
    double total_earnings = 0.0;
    char response[4];

    do {
        // Read if the driver is a member or not
        printf("Are you a member? (Yes/No): ");
        scanf("%3s", response);
        for (int i = 0; response[i]; i++) {
            response[i] = tolower(response[i]); // Convert to lowercase
        }

        // Check if the driver entered the proper response
        if (strcmp(response, "yes") == 0) {
            printf("You are a member.\n");
            total_earnings += FIXED_COST_MEMBER;
        }
        else if (strcmp(response, "no") == 0) {
            printf("You are not a member.\n");
            total_earnings += FIXED_COST_NON_MEMBER;
        }
        else {
            printf("Invalid response. Please enter Yes or No.\n");
            continue;
        }

        // Ask the driver how many hours have parked
        int hours_parked;
        printf("How many hours have you parked? ");
        if (scanf("%d", &hours_parked) != 1 || hours_parked < 1) {
            printf("Invalid input. Please enter a positive integer.\n");
            continue;
        }

        // Calculate the cost the driver has to pay
        double cost = 0.0;
        if (hours_parked <= 1) {
            cost = HOURLY_RATE_1;
        }
        else if (hours_parked == 2) {
            cost = HOURLY_RATE_1 + HOURLY_RATE_2;
        }
        else if (hours_parked == 3) {
            cost = HOURLY_RATE_1 + HOURLY_RATE_2 + HOURLY_RATE_3;
        }
        else {
            cost = HOURLY_RATE_1 + HOURLY_RATE_2 + HOURLY_RATE_3 + (hours_parked - 3) * HOURLY_RATE_4_OR_MORE;
        }
        total_earnings += cost;
        printf("The cost is %.1f$.\n", cost);

        // Ask the user to continue the program or not
        char continue_program[4];
        printf("Do you want to continue the program? (Yes/No): ");
        scanf("%3s", continue_program);
        for (int i = 0; continue_program[i]; i++) {
            continue_program[i] = tolower(continue_program[i]); // Convert to lowercase
        }
        if (strcmp(continue_program, "yes") == 0) {
            num_drivers++;
        }
        else {
            printf("%d driver%s payed. The total earnings are %.1f$.\n", num_drivers + 1, num_drivers == 0 ? "" : "s", total_earnings);
            break;
        }

    } while (1);

    return 0;
}