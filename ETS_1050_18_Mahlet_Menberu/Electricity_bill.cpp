/*
     IPO (Input, Process, Output)

1. Input
- Electricity units used in a month (kWh)

2. Process
- Declare one integer variable: units
- Declare three double variables: energyCharge, serviceCharge, and totalBill
- Get the electricity units from the user
- Check whether the units are less than or equal to 50 using the conditional operator
- If the units are 50 or below, multiply the units by 1.50 birr
- Otherwise, calculate the first 50 units at 1.50 birr each and the remaining units at 2.00 birr each
- Set the service charge to 10.00 birr
- Calculate the total bill by adding the energy charge and service charge
- print the energy charge, service charge, and total bill to two decimal places

3. Output
- Print the energy charge in birr
- Print the service charge in birr
- Print the total bill in birr


     Program Design (Algorithm)

1. Start
2. Declare one integer variable: units
3. Declare three double variables: energyCharge, serviceCharge, and totalBill
4. Ask the user to enter the electricity units used
5. Read the electricity units
6. Calculate the energy charge using the conditional operator:

   energyCharge = (units <= 50) ? (units * 1.50) : (50 * 1.50) + ((units - 50) * 2.00)

7. Set the service charge to 10.00 birr
8. Calculate the total bill using:

   totalBill = energyCharge + serviceCharge

9. Display the energy charge to two decimal places
10. Display the service charge to two decimal places
11. Display the total bill to two decimal places
12. End
*/


// Actual code

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int units;
    double energyCharge, serviceCharge, totalBill;

    cout << "Enter electricity units: ";
    cin >> units;

    energyCharge = (units <= 50)
        ? (units * 1.50)
        : (50 * 1.50) + ((units - 50) * 2.00);

    serviceCharge = 10.00;

    totalBill = energyCharge + serviceCharge;

    cout << fixed << setprecision(2);

    cout << "Energy Charge: " << energyCharge << " birr" << endl;
    cout << "Service Charge: " << serviceCharge << " birr" << endl;
    cout << "Total Bill: " << totalBill << " birr" << endl;

    return 0;
}
