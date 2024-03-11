// c program to calculate and display the electricity bill
#include <stdio.h>

int main() {
    // Input variables
    int customerID;
    char customerName[50];
    float unitConsumed;

    // Prompt user for input
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);

    printf("Enter Customer Name: ");
    scanf("%s", customerName);

    printf("Enter Units Consumed: ");
    scanf("%f", &unitConsumed);

    // Charges calculation based on given conditions
    float chargesPerUnit;
    if (unitConsumed <= 300) {
        chargesPerUnit = 175;
    } else if (unitConsumed > 300 && unitConsumed < 600) {
        chargesPerUnit = 200;
    } else if (unitConsumed >= 600 && unitConsumed < 800) {
        chargesPerUnit = 300;
    } else {
        chargesPerUnit = 400;
    }

    // Calculate total bill
    float totalBill = unitConsumed * chargesPerUnit;

    // Apply surcharge if total bill exceeds 500
    if (totalBill > 500) {
        totalBill += totalBill * 0.2;  // 20% surcharge
    }

    // Ensure the minimum bill is 200
    if (totalBill < 200) {
        totalBill = 200;
    }

    // Display the output
    printf("\nCustomer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %.2f\n", unitConsumed);
    printf("Charges per Unit: Ksh %.2f\n", chargesPerUnit);
    printf("Total Amount to Pay: Ksh %.2f\n", totalBill);

    return 0;
}