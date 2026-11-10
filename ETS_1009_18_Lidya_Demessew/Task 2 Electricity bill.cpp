/* TASK 2(INPUT, OUTPUT, PROCESS, DESIGN AND CODE) 

Input: units used in the month (kWh, a whole number)
Output: the energy charge, the service charge and the total bill, each to two decimal places
Process: charge 1.50 birr for each of the first 50 units and 2.00 birr for each unit above 50, then add a fixed 10 birr service charge.

design:
Variables: what and how?
Variable	
units = int(Units are a whole number of kWh.)
firstUnits = int(Count of units charged at the first rate (at most 50))
extraUnits = int(Count of units above 50 (0 if the customer used 50 or less))
energyCharge = double(Money result with decimals)
total = double(Money result with decimals)

Constants
const int BLOCK_LIMIT = 50;
const double RATE_FIRST = 1.50;
const double RATE_ABOVE = 2.00;
const double SERVICE_CHARGE = 10.0;

Reading the input
cout << "Enter the units used this month (kWh): ";
cin >> units;

calculation
firstUnits = (units < BLOCK_LIMIT) ? units : BLOCK_LIMIT;
extraUnits = (units > BLOCK_LIMIT) ? (units - BLOCK_LIMIT) : 0;
energyCharge = firstUnits * RATE_FIRST + extraUnits * RATE_ABOVE;
total = energyCharge + SERVICE_CHARGE;

Printing the result
cout << fixed << setprecision(2);
cout << "Energy charge : " << energyCharge << " birr" << endl;
cout << "Service charge: " << SERVICE_CHARGE << " birr" << endl;
cout << "Total bill: " << total << " birr" << endl;
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int    BLOCK_LIMIT    = 50;
    const double RATE_FIRST     = 1.50;
    const double RATE_ABOVE     = 2.00;
    const double SERVICE_CHARGE = 10.0;

    int units, firstUnits, extraUnits;
    double energyCharge, total;

    cout << "Enter the units used this month (kWh): ";
    cin >> units;
       
    firstUnits = (units < BLOCK_LIMIT) ? units : BLOCK_LIMIT;
    extraUnits = (units > BLOCK_LIMIT) ? (units - BLOCK_LIMIT) : 0;

    energyCharge = firstUnits * RATE_FIRST + extraUnits * RATE_ABOVE;
    total        = energyCharge + SERVICE_CHARGE;

    cout << fixed << setprecision(2);
    cout << "Energy charge : " << energyCharge   << " birr" << endl;
    cout << "Service charge: " << SERVICE_CHARGE << " birr" << endl;
    cout << "Total bill    : " << total          << " birr" << endl;

    return 0;
}
