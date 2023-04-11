#include <stdio.h>

int main() {
    int apartments[100];
    int n = 0;
    int total_price = 0;
    float average_price = 0;

    int price;
    do {
        printf("Enter price %d: ", n+1);
        scanf("%d", &price);
        
        if (price > 0) {
            apartments[n] = price;
            total_price += price;
            n++;
        }
    } while (price > 0);

    if (n > 0) {
        average_price = (float) total_price / n;
        printf("%d apartments have registered. The average price for rent is %.2f$\n", n, average_price);

        for (int i = 0; i < n; i++) {
            if (apartments[i] > average_price) {
                printf("Apartment %d's rent is above average price\n", i+1);
            } else if (apartments[i] < average_price) {
                printf("Apartment %d's rent is below average price\n", i+1);
            } else {
                printf("Apartment %d's rent is equal to average price\n", i+1);
            }
        }
    } else {
        printf("No apartments registered\n");
    }

    return 0;
}
