#include <stdio.h>

int main() {
    float balance = 5000.00;
    float amount;

    while (1) {
        printf("\nEnter amount: ");
        scanf("%f", &amount);

        if (amount == 0) {
            printf("ATM Exit! Goodbye!\n");
            break;
        }

        if (amount < 0 || amount > balance) {
            printf("Invalid Amount! Try again!\n");
            continue;
        }

        balance = balance - amount;

        printf("Withdrawal Successful!\n");
        printf("Balance: P %.2f\n", balance);
    }

    return 0;
}
