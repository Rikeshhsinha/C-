#include <stdio.h>

int main() {
    int age;
    char choice;

    while (1) {  
        printf("Enter your age (Press 'S' to stop): ");
        
        if (scanf("%d", &age) != 1) { 
            scanf("%c", &choice); 
            if (choice == 's' || choice == 'S') {
                break;  
            }
            printf("Invalid input. Please enter a valid age.\n");
            while (getchar() != '\n'); 
            continue;
        }

        if (age >= 18) {
            printf("Adult\n");
        } else {
            printf("Child\n");
        }
    }

    printf("Program stopped.\n");
    return 0;
}
