


#include <stdio.h>

int main() {
    int duration;
    float bill = 25.0;

    printf("Call duration : ");
    scanf("%d", &duration);

    if (duration <= 500) {
        bill += duration * 0.01;
    } else if (duration <= 800) {
        bill += 500 * 0.01 + (duration - 500) * 0.008;
    } else {
        bill += 500 * 0.01 + 300 * 0.008 + (duration - 800) * 0.005;
    }

    printf("Total amount: %.2f$\n", bill);

    return 0;
}
