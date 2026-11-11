 /*==========================================================================
      TASK 2: Electricity Bill Program: Design Procedure
      --------------------------------------------------------------------------
      Input : electricity units used in a month (kWh, a whole number).
      Output: the energy charge, the service charge and the total bill,
              each to two decimal places.
      Restriction: no if and no loops. Use the conditional operator to
                   handle the tier above 50 units.
      Process: charge the first 50 units at the low rate, add the extra cost
               for units above 50 (using the conditional operator), add the
               fixed service charge, then print.

      1. Variable types:
         units        = int    (Units used is a whole number, e.g. 70)
         energyCharge = double (Money result with decimals)
         totalBill    = double (Money result with decimals)

      2.1 Constants:
         const int    FREE_LIMIT     = 50;     // units at the low rate
         const double RATE_LOW       = 1.50;   // birr per unit (first 50)
         const double RATE_HIGH      = 2.00;   // birr per unit (above 50)
         const double SERVICE_CHARGE = 10.00;  // fixed birr per month

      2.2 Reading the input:
         cout << "Enter electricity units used (kWh): ";
         cin  >> units;

      2.3 Calculation:
         Every unit is charged at the low rate first. Then, only when
         units > FREE_LIMIT, an extra (RATE_HIGH - RATE_LOW) is added for
         each unit above 50. The conditional operator supplies that extra
         amount, or 0 when the limit is not exceeded.
         energyCharge = units * RATE_LOW
                      + (units > FREE_LIMIT
                           ? (units - FREE_LIMIT) * (RATE_HIGH - RATE_LOW)
                           : 0);
         totalBill = energyCharge + SERVICE_CHARGE;

         Note: units is an int and RATE_LOW is a double, so units * RATE_LOW
         is automatically promoted to double - no explicit cast is required.

      2.4 Printing the result:
         cout << fixed << setprecision(2);
         cout << "Energy charge : " << energyCharge  << " birr" << endl;
         cout << "Service charge: " << SERVICE_CHARGE << " birr" << endl;
         cout << "Total bill    : " << totalBill     << " birr" << endl;
      ==========================================================================*/

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
