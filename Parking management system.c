#include <stdio.h>

int main() {
    int parking[50] = {0};
    int choice, slot, available = 50;

    while(1) {
        printf("\n1. Vehicle Entry");
        printf("\n2. Vehicle Exit");
        printf("\n3. Show Available Slots");
        printf("\n4. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter slot number (1-50): ");
                scanf("%d", &slot);

                if(slot < 1 || slot > 50) {
                    printf("Invalid slot number!\n");
                }
                else if(parking[slot-1] == 0) {
                    parking[slot-1] = 1;
                    available--;
                    printf("Vehicle parked successfully.\n");
                }
                else {
                    printf("Slot already occupied.\n");
                }
                break;

            case 2:
                printf("Enter slot number (1-50): ");
                scanf("%d", &slot);

                if(slot < 1 || slot > 50) {
                    printf("Invalid slot number!\n");
                }
                else if(parking[slot-1] == 1) {
                    parking[slot-1] = 0;
                    available++;
                    printf("Vehicle exited successfully.\n");
                }
                else {
                    printf("Slot already empty.\n");
                }
                break;

            case 3:
                printf("Available Slots = %d\n", available);
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
}