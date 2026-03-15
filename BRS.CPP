#include <stdio.h>
#include <stdlib.h>

#define MAX_SEATS 50

int seats[MAX_SEATS] = {0};  // 0 indicates an available seat

void displaySeats() {
    printf("\nAvailable Seats:\n");
    for (int i = 0; i < MAX_SEATS; i++) {
        printf("%d ", seats[i]);
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }
    printf("\n");
}

void reserveSeat(int seatNumber) {
    if (seatNumber >= 1 && seatNumber <= MAX_SEATS) {
        if (seats[seatNumber - 1] == 0) {
            seats[seatNumber - 1] = 1;  // 1 indicates a reserved seat
            printf("Seat %d reserved successfully.\n", seatNumber);
        } else {
            printf("Seat %d is already reserved.\n", seatNumber);
        }
    } else {
        printf("Invalid seat number.\n");
    }
}

int main() {
    int choice, seatNumber;

    do {
	printf("BUS RESERVATION SYSTEM\n");
        printf("\n1. Display Available Seats\n");
        printf("2. Reserve a Seat\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displaySeats();
                break;
            case 2:
                printf("Enter the seat number you want to reserve: ");
                scanf("%d", &seatNumber);
                reserveSeat(seatNumber);
                break;
            case 3:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 3);

    return 0;
}