

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Function to calculate electricity charges
float calculateElectricityCharges(int units) {
    float charges = 0.0;

    if (units <= 100) {
        charges = units * 2.0;
    } else if (units <= 200) {
        charges = 100 * 2.0 + (units - 100) * 3.5;
    } else {
        charges = 100 * 2.0 + 100 * 3.5 + (units - 200) * 4.5;
    }

    return charges;
}

// Function to display the bill with consumer information
void displayBill(const string& firstName, const string& lastName, int houseID, float amountDue) {
    cout << "Electricity Bill Statement" << endl;
    cout << "*************************" << endl;
    cout << "Consumer Name: " << firstName << " " << lastName << endl;
    cout << "House ID: " << houseID << endl;
    cout << fixed << setprecision(2);
    cout << "Amount Due: " << amountDue << endl;
    cout << "*************************" << endl;
}

int main() {
    string firstName, lastName;
    int houseID, units;
    float electricityCharges, tax, amountDue;

    // Input consumer information
    cout << "Enter consumer's first name: ";
    cin >> firstName;

    cout << "Enter consumer's last name: ";
    cin >> lastName;

    cout << "Enter house ID: ";
    cin >> houseID;

    // Input units consumed
    cout << "Enter units consumed: ";
    cin >> units;

    // Calculate electricity charges
    electricityCharges = calculateElectricityCharges(units);

    // Calculate tax
    tax = 0.1 * electricityCharges;

    // Calculate total amount due
    amountDue = electricityCharges + tax;

    // Display the bill
    displayBill(firstName, lastName, houseID, amountDue);

    return 0;
}
