/*
Task 2: Electricity bill

(a) Inputs and Outputs
    Inputs:
      - electricity units used in the month (kWh, whole number)
    Outputs:
      - energy charge (two decimal places)
      - service charge (two decimal places)
      - total bill (two decimal places)

(b) Process
    1. Declare a variable for the units (int) and variables for the
       energy charge, service charge and total bill (double).
    2. Declare constants: first-block limit = 50 units,
       rate for first 50 units = 1.50 birr,
       rate above 50 units = 2.00 birr,
       service charge = 10.00 birr.
    3. Ask the user to enter the units used and read it.
    4. Use the conditional operator to calculate the energy charge:
       if units <= 50, energy = units * 1.50,
       otherwise energy = (50 * 1.50) + ((units - 50) * 2.00).
    5. Set the service charge to the constant 10.00 birr.
    6. Calculate: total = energy + service charge.
    7. Set the output to fixed with two decimal places.
    8. Display the energy charge, the service charge and the total bill.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int units;
    double energyCharge, serviceCharge, totalBill;

    const int LIMIT = 50;
    const double RATE_FIRST = 1.50;
    const double RATE_ABOVE = 2.00;
    const double SERVICE_CHARGE = 10.00;

    cout << "Enter electricity units used (kWh): ";
    cin >> units;

    energyCharge = (units <= LIMIT)
                       ? (units * RATE_FIRST)
                       : (LIMIT * RATE_FIRST) + ((units - LIMIT) * RATE_ABOVE);

    serviceCharge = SERVICE_CHARGE;

    totalBill = energyCharge + serviceCharge;

    cout << fixed << setprecision(2);

    cout << "Energy charge: " << energyCharge << " birr" << endl;
    cout << "Service charge: " << serviceCharge << " birr" << endl;
    cout << "Total bill: " << totalBill << " birr" << endl;

    return 0;
}
