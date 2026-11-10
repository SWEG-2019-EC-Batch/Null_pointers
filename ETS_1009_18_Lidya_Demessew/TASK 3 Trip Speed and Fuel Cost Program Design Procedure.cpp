/*
TASK 3: Trip Speed and Fuel Cost Program: Design Procedure

Input: trip distance (km), travel time as whole hours and whole minutes, fuel use (liters per 100 km), and price per liter (birr).

Output: the average speed (km/h), the fuel used (liters) and the fuel cost (birr), each to two decimal places.
Restriction: none on if this time, but none is needed anyway since there is no decision to make.

Process: convert the time to hours, then compute the average speed, the fuel used and the fuel cost.

Output: the average speed (km/h), the fuel used (liters) and the fuel cost (birr), each to two decimal places.
Restriction: none on if this time, but none is needed anyway since there is no decision to make.

2. Variable types: 
distance = double(Distances may have decimals (e.g. 245.5 km))
hours = int(The hours part of the time is a whole number)
minutes = int(The minutes part of the time is a whole number)
fuelRate = double(Fuel use per 100 km may have decimals (e.g. 7.5))
pricePerLiter = double(Prices have decimals)
totalHours = double(Time converted to hours is usually fractional (e.g. 2h 30min = 2.5 h))
speed = double(Result with decimals)
fuelUsed = double(Result with decimals)
fuelCost = double(Money result with decimals)

2.1 Constants
const int MINUTES_PER_HOUR = 60;
const double FUEL_BASE_KM     = 100.0;

2.2 Reading the input
cout << "Enter distance (km): ";
cin >> distance;
cout << "Enter travel time (hours and minutes) separated by space: ";
cin >> hours >> minutes;
cout << "Enter fuel use (liters per 100 km): ";
cin >> fuelRate;
cout << "Enter price per liter (birr): ";
cin >> pricePerLiter;

2.3 Calculation
The minutes must be converted to a fraction of an hour. Dividing by the double constant (or casting) avoids integer division, which would throw away the fractional part.
totalHours = hours + static_cast<double>(minutes) / MINUTES_PER_HOUR;

speed    = distance / totalHours;
fuelUsed = distance * fuelRate / FUEL_BASE_KM;
fuelCost = fuelUsed * pricePerLiter;

2.4 Printing the result
cout << fixed << setprecision(2);
cout << "Average speed: " << speed    << " km/h"  << endl;
cout << "Fuel used    : " << fuelUsed << " liters" << endl;
cout << "Fuel cost    : " << fuelCost << " birr"   << endl;
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int    MINUTES_PER_HOUR = 60;
    const double FUEL_BASE_KM     = 100.0;

    double distance, fuelRate, pricePerLiter;
    double totalHours, speed, fuelUsed, fuelCost;
    int hours, minutes;

    cout << "Enter distance (km): ";
    cin >> distance;
    cout << "Enter travel time (hours and minutes) separated by space: ";
    cin >> hours >> minutes;
    cout << "Enter fuel use (liters per 100 km): ";
    cin >> fuelRate;
    cout << "Enter price per liter (birr): ";
    cin >> pricePerLiter;

    totalHours = hours + static_cast<double>(minutes) / MINUTES_PER_HOUR;

    speed    = distance / totalHours;
    fuelUsed = distance * fuelRate / FUEL_BASE_KM;
    fuelCost = fuelUsed * pricePerLiter;

    cout << fixed << setprecision(2);
    cout << "Average speed: " << speed    << " km/h"  << endl;
    cout << "Fuel used    : " << fuelUsed << " liters" << endl;
    cout << "Fuel cost    : " << fuelCost << " birr"   << endl;

    return 0;
}
