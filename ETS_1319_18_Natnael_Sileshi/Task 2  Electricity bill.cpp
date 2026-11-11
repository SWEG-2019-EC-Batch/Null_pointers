#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Constants for the tariff and service charge
    const int    FREE_LIMIT       = 50;
    const double RATE_LOW         = 1.50;
    const double RATE_HIGH        = 2.00;
    const double SERVICE_CHARGE   = 10.00;

    int units;

    // Read the units used (whole number, kWh)
    cout << "Enter electricity units used (kWh): ";
    cin  >> units;

    // Use the conditional operator to handle the "above 50" portion.
    double energyCharge = (units * RATE_LOW)   + (units > FREE_LIMIT ? (units - FREE_LIMIT) * (RATE_HIGH - RATE_LOW) : 0);

    // Total bill = energy charge + fixed service charge
    double totalBill = energyCharge + SERVICE_CHARGE;

    // Print results to two decimal places
    cout << fixed << setprecision(2);
    cout << "Energy charge:  " << energyCharge << " birr" << endl;
    cout << "Service charge: " << SERVICE_CHARGE << " birr" << endl;
    cout << "Total bill:     " << totalBill    << " birr" << endl;

    return 0;
}