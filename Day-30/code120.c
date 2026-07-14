#include<stdio.h>
#include<string.h>
// Structure to hold Room Reservation details
struct Room{
    int room_number;
    char guest_name[50];
    char room_type[30]; // e.g., Deluxe, Suite, Standard
    float price_per_night;
};
void bookRooms(struct Room hotel[], int total_rooms);
void displayReservations(struct Room hotel[], int total_rooms);
int main(){
    int total_rooms;
    int choice;
    printf("    HOTEL RESERVATION SYSTEM INITIALIZATION    \n");
    printf("Enter the total number of rooms to manage today: ");
    if(scanf("%d", &total_rooms) != 1 || total_rooms <= 0) {
        printf("Invalid number of rooms! Exiting program.\n");
        return 1;
    }
    struct Room hotel_inventory[total_rooms];
    // Initialize room status (setting room numbers to 0 to indicate they are vacant)
    for(int i = 0; i < total_rooms; i++) {
        hotel_inventory[i].room_number = 0;
    }
    while(1){
        printf("\n    HOTEL MANAGEMENT MENU    \n");
        printf("1. Check-In Guests (Book All Rooms)\n");
        printf("2. View Room Status & Reservations\n");
        printf("3. Exit System\n");
        printf("Enter choice (1-3): ");
        if(scanf("%d", &choice) != 1){
            printf("Invalid selection! Please enter a number.\n");
            while (getchar() != '\n'); // Clear character input loop traps
            continue;
        }
        if(choice == 3){
            printf("Shutting down the hotel system. Goodbye!\n");
            break;
        }
        switch(choice){
            case 1:
                bookRooms(hotel_inventory, total_rooms);
                break;
            case 2:
                displayReservations(hotel_inventory, total_rooms);
                break;
            default:
                printf("Invalid option! Please pick 1, 2, or 3.\n");
        }
    }
    return 0;
}

// Function 1: To book and populate the room structures
void bookRooms(struct Room hotel[], int total_rooms) {
    printf("\n--- GUEST CHECK-IN PROCESS ---\n");
    for (int i = 0; i < total_rooms; i++) {
        hotel[i].room_number = 101 + i; // Automatically assign room numbers (101, 102, 103...)
        printf("\nBooking Room Number: %d\n", hotel[i].room_number);
        getchar(); // Clear trailing newline from the input buffer

        printf("Enter Guest Name: ");
        fgets(hotel[i].guest_name, sizeof(hotel[i].guest_name), stdin);
        hotel[i].guest_name[strcspn(hotel[i].guest_name, "\n")] = 0; // Strip newline

        printf("Enter Room Type (Standard/Deluxe/Suite): ");
        fgets(hotel[i].room_type, sizeof(hotel[i].room_type), stdin);
        hotel[i].room_type[strcspn(hotel[i].room_type, "\n")] = 0;

        printf("Enter Price Per Night: $");
        if(scanf("%f", &hotel[i].price_per_night) != 1) {
            printf("Invalid price input! Setting default to $99.99.\n");
            hotel[i].price_per_night = 99.99;
            while (getchar() != '\n'); // Clear out flawed input
        }
    }
    printf("\nAll bookings updated successfully!\n");
}
void displayReservations(struct Room hotel[], int total_rooms) {
    printf("\n=========================================================================\n");
    printf("                       HOTEL ROOM AVAILABILITY REPORT                    \n");
    printf("=========================================================================\n");
    printf("%-10s %-25s %-20s %-12s\n", "Room No", "Guest Name", "Room Type", "Rate/Night");
    printf("-------------------------------------------------------------------------\n");
    
    for (int i = 0; i < total_rooms; i++) {
        if (hotel[i].room_number == 0) {
            // Displays if option 1 hasn't been run yet
            printf("%-10d %-25s %-20s %-12s\n", 101 + i, "[ VACANT ]", "[ N/A ]", "$0.00");
        } else {
            printf("%-10d %-25s %-20s $%-11.2f\n", hotel[i].room_number, hotel[i].guest_name, hotel[i].room_type, hotel[i].price_per_night);
        }
    }
    printf("=========================================================================\n");
}