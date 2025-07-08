#include <stdio.h>

int main() {
    int pin, option;
    float balance = 50000, amount;

    printf("Enter your 4-digit PIN: ");
    scanf("%d", &pin);

    if (pin == 4321) {
        do {
            printf("\nATM Menu:\n");
            printf("1. Check Balance\n");
            printf("2. Deposit\n");
            printf("3. Withdraw\n");
            printf("4. Exit\n");
            printf("Choose an option: ");
            scanf("%d", &option);

            switch (option) {
                case 1:
                    printf("Current Balance: %.2f\n", balance);
                    break;
                case 2:
                    printf("Enter amount to deposit: ");
                    scanf("%f", &amount);
                    balance += amount;
                    printf("Deposit successful!\n");
                    break;
                case 3:
                    printf("Enter amount to withdraw: ");
                    scanf("%f", &amount);
                    if (amount > balance)
                        printf("Insufficient balance.\n");
                    else {
                        balance -= amount;
                        printf("Withdrawal successful!\n");
                    }
                    break;
                case 4:
                    printf("Thank you for using our ATM!\n");
                    break;
                default:
                    printf("Invalid option.\n");
            }
        } while (option != 4);
        printf("ATM exited.\n");  
    } else {
        printf("Incorrect PIN. Access denied.\n");
    }

    return 0; 
}
