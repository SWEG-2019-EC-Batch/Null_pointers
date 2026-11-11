/*
Task 3: Trip speed and fuel cost

(a) Inputs and Outputs
    Inputs:
      - distance of the trip (km)
      - travel time: hours (whole number)
      - travel time: minutes (whole number)
      - fuel use of the car (liters per 100 km)
      - price per liter (birr)
    Outputs:
      - average speed (km/h, two decimal places)
      - fuel used (liters, two decimal places)
      - fuel cost (birr, two decimal places)

(b) Process
    1. Declare variables: distance, fuelPer100, pricePerLiter, totalHours,
       speed, fuelUsed, fuelCost (double); hours, minutes (int).
    2. Declare a constant for minutes in an hour (60.0) and
       a constant for the 100 km base (100.0).
    3. Ask the user to enter the distance and read it.
    4. Ask the user to enter the hours and minutes and read them.
    5. Ask the user to enter the fuel use per 100 km and read it.
    6. Ask the user to enter the price per liter and read it.
    7. Convert the time to hours using casting:
       totalHours = hours + static_cast<double>(minutes) / 60.
    8. Calculate: speed = distance / totalHours.
    9. Calculate: fuelUsed = (distance / 100) * fuelPer100.
   10. Calculate: fuelCost = fuelUsed * pricePerLiter.
   11. Set the output to fixed with two decimal places.
   12. Display the average speed, the fuel used and the fuel cost.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int hours, minutes;
    double distance, fuelPer100, pricePerLiter;
    double totalHours, speed, fuelUsed, fuelCost;

    const double MINUTES_IN_HOUR = 60.0;
    const double BASE_KM = 100.0;

    cout << "Enter distance (km): ";
    cin >> distance;

    cout << "Enter travel time hours: ";
    cin >> hours;

    cout << "Enter travel time minutes: ";
    cin >> minutes;

    cout << "Enter fuel use (liters per 100 km): ";
    cin >> fuelPer100;

    cout << "Enter price per liter (birr): ";
    cin >> pricePerLiter;

    totalHours = hours + static_cast<double>(minutes) / MINUTES_IN_HOUR;

    speed = distance / totalHours;
    fuelUsed = (distance / BASE_KM) * fuelPer100;
    fuelCost = fuelUsed * pricePerLiter;

    cout << fixed << setprecision(2);

    cout << "Average speed: " << speed << " km/h" << endl;
    cout << "Fuel used: " << fuelUsed << " liters" << endl;
    cout << "Fuel cost: " << fuelCost << " birr" << endl;

    return 0;
}
