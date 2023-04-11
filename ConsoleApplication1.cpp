#include <stdio.h>

int calculateSalary(int yearsEmployed, int numberOfChildren) {
    int minimumWage = 400;
    int yearsBonus = 20 * yearsEmployed;
    int childrenBonus = 30 * numberOfChildren;
    int totalSalary = minimumWage + yearsBonus + childrenBonus;
    return totalSalary;
}

int main() {
    int years, children;
    printf("Enter the number of years employed: ");
    scanf("%d", &years);
    printf("Enter the number of children: ");
    scanf("%d", &children);
    int salary = calculateSalary(years, children);
    printf("The total amount is %d$. %d$ minimum wage + %d$ for %d years experience + %d$ for %d kids\n", salary, 400, 20 * years, years, 30 * children, children);
    return 0;
}