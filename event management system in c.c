#include <stdio.h>

void displaySchedule()
{
    printf("\nEvent Schedule:\n");
    printf("1. Event - comedy show  - Date: 10.1.24, Time: 11:00 am\n");
    printf("2. Event - fashion show - Date: 10.1.24, Time: 01:30 pm\n");
    printf("3. Event - singing show - Date: 11.1.24, Time: 11:00 pm\n");
    printf("4. Event - Dance show   - Date: 11.1.24, Time: 01:30 pm\n");
    printf("5. Event - puppet show  - Date: 12.1.24, Time: 11:30 pm\n");
}

int main()
{
    char userName[50],email[50];
    int userAge;

    // Get user details
    printf("Enter your name: ");
    scanf("%s", userName);

    printf("Enter your age: ");
    scanf("%d", &userAge);

    printf("Enter your email id: ");
    scanf("%s", email);

    // Display event schedule
    displaySchedule();

    // Choose an event
    int choice,ticketno,total;
    printf("\nEnter the event number you want to book (1 or 2 or 3 or 4 or 5): ");
    scanf("%d", &choice);

    // calculate the ticket amount
    switch (choice)
    {
        case 1:
            printf("Event-comedy show selected.\nEnter the number of tickets: ");
            scanf("%d", &ticketno);
            total=ticketno*50;
            break;
        case 2:
            printf("Event-fashion show selected.\nEnter the number of tickets: ");
            scanf("%d", &ticketno);
            total=ticketno*50;
            break;
        case 3:
            printf("Event-Singing  show selected.\nEnter the number of tickets: ");
            scanf("%d", &ticketno);
            total=ticketno*50;
            break;
        case 4:
            printf("Event-Dance show selected.Enter the number of tickets: ");
            scanf("%d", &ticketno);
            total=ticketno*50;
            break;
        case 5:
            printf("Event-  puppet show selected.Enter the number of tickets: ");
            scanf("%d", &ticketno);
            total=ticketno*50;
            break;
        default:
            printf("Invalid choice!\n");
            return 1;
    }

    // Display booking confirmation
    printf("\nConfirmation:\n");
    printf("Name: %s\n", userName);
    printf("Age: %d\n", userAge);
    printf("Event: %d\n", choice);
    printf("Number of Tickets: %d\n", ticketno);
    printf("Total amount: %d\n", total);
    printf("Enjoy the event!\n");

    return 0;
}
