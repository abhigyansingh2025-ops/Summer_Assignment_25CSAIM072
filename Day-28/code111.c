#include<stdio.h>
#include<string.h>
struct Ticket{
    char passenger_name[50];
    int seat_number;
    float ticket_price;
};
int main() {
    struct Ticket t;
    printf("    TICKET BOOKING SYSTEM    \n");
    
    printf("Enter Passenger Name: ");
    fgets(t.passenger_name, sizeof(t.passenger_name), stdin);
    t.passenger_name[strcspn(t.passenger_name, "\n")] = 0;
    
    printf("Enter Desired Seat Number: ");
    scanf("%d", &t.seat_number);
    
    printf("Enter Ticket Base Price: $");
    scanf("%f", &t.ticket_price);

    printf("\n====================================");
    printf("\n        CONFIRMED TICKET            ");
    printf("\n====================================");
    printf("\nPassenger:   %s", t.passenger_name);
    printf("\nSeat Number: %d", t.seat_number);
    printf("\nTotal Fare:  $%.2f", t.ticket_price);
    printf("\nStatus:      BOOKED & CONFIRMED");
    printf("\n====================================\n");
    return 0;
}