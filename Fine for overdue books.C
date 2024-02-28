// c function to calculate fine for overdue library books
#include <stdio.h>

int main() {
    // Step I: Taking inputs from the user
    int bookID, dueDate, returnDate;
    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    printf("Enter Due Date: ");
    scanf("%d", &dueDate);
    printf("Enter Return Date: ");
    scanf("%d", &returnDate);

    // Step II: Calculate days overdue
    int daysOverdue = returnDate - dueDate;

    // Step III: Determine fine rate and apply calculations
    int fineRate, fineAmount;
    if (daysOverdue <= 7) {
        fineRate = 20;
    } else if (daysOverdue <= 14) {
        fineRate = 50;
    } else {
        fineRate = 100;
    }

    fineAmount = daysOverdue * fineRate;

    // Step IV: Display the results
    printf("\nBook ID: %d\nDue Date: %d\nReturn Date: %d\nDays Overdue: %d\nFine Rate: Kshs. %d\nFine Amount: Kshs. %d\n", 
           bookID, dueDate, returnDate, daysOverdue, fineRate, fineAmount);

    return 0;
}