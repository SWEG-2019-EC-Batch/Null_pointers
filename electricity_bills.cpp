// 1. INPUT
// Electricity units used in a month (kWh).
// 2. OUTPUT
// Energy charge.
// Service charge.
// Total electricity bill.
// 3. PROCESS

// 1. Declare variables (units, energyCharge, serviceCharge,
//    and totalBill).

// 2. Declare constants for the first 50 units rate,
//    additional units rate, and service charge.

// 3. Read the electricity units from the user.

// 4. Calculate the energy charge using the conditional
//    operator:
//    If units are less than or equal to 50,
//    multiply units by 1.50.
//    Otherwise, calculate the cost of the first 50 units
//    and add the cost of the remaining units at 2.00.

// 5. Set the service charge to 10 birr.

// 6. Add the energy charge and service charge
//    to calculate the total bill.

// 7. Display the energy charge, service charge,
//    and total bill to two decimal places.


#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // 1. Declare variables
    int units;
    double energyCharge;
    double serviceCharge;
    double totalBill;

    // 2. Declare constants
    const double FIRST_RATE = 1.50;
    const double EXTRA_RATE = 2.00;
    const double SERVICE_CHARGE = 10.00;

    // 3. Read electricity units
    cout << "Enter electricity units used: ";
    cin >> units;

    // 4. Calculate energy charge using conditional operator
    energyCharge = (units <= 50)
        ? units * FIRST_RATE
        : (50 * FIRST_RATE) + ((units - 50) * EXTRA_RATE);

    // 5. Set service charge
    serviceCharge = SERVICE_CHARGE;

    // 6. Calculate total bill
    totalBill = energyCharge + serviceCharge;

    // 7. Display the bill to two decimal places
    cout << fixed << setprecision(2);

    cout << "Energy charge: " << energyCharge << " birr" << endl;
    cout << "Service charge: " << serviceCharge << " birr" << endl;
    cout << "Total bill: " << totalBill << " birr" << endl;

    return 0;
}
