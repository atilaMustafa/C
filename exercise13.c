#include <stdio.h>

int main() {
    int isMember, hours;
    float rate, tax, total;

   
    printf("Enter number of hours: ");
    scanf("%d", &hours);
    printf("Are you a member? (1 for yes, 0 for no): ");
    scanf("%d", &isMember);

    if (isMember ==1)
    {
        rate = 2.0;
        tax = 0.1;
        total= (hours*rate)*tax+hours*rate;
        
        printf("The user is a member. The cost is :%.1f$\n",total);
    }
    else if (isMember ==0)
    {
        rate = 5.0;
        tax = 0.2;
        total= (hours*rate)*tax+hours*rate;
        
        printf("The user is not  a member. The cost is :%.1f$\n",total);
    }
    else
    {
        printf("Invalid chosen.\n");
    }



    return 0;
}
