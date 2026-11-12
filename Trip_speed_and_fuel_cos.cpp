// 1. INPUT
// Distance of the trip in kilometres.
// Travel time in hours and minutes.
// Car fuel consumption in litres per 100 km.
// Price per litre of fuel in birr.
// 2. OUTPUT
// Average speed in km/h.
// Fuel used in litres.
// Fuel cost in birr.
// 3. PROCESS

// 1. Declare variables for distance, hours, minutes,
//    fuel consumption, price per litre, total time,
//    average speed, fuel used, and fuel cost.

// 2. Read the distance, travel time, fuel consumption,
//    and price per litre from the user.

// 3. Convert the travel time into hours.
//    Divide minutes by 60.0 and add the result to hours.

// 4. Calculate average speed.
//    Divide the distance by the total travel time in hours.

// 5. Calculate the fuel used.
//    Multiply the distance by fuel consumption
//    and divide the result by 100.

// 6. Calculate fuel cost.
//    Multiply fuel used by the price per litre.

// 7. Display average speed, fuel used, and fuel cost
//    to two decimal places.


#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // 1. Declare variables
    double distance;
    int hours;
    int minutes;
    double fuelConsumption;
    double pricePerLiter;
    double totalTime;
    double averageSpeed;
    double fuelUsed;
    double fuelCost;

    // 2. Read inputs from the user
    cout << "Enter distance in km: ";
    cin >> distance;

    cout << "Enter travel time in hours: ";
    cin >> hours;

    cout << "Enter travel time in minutes: ";
    cin >> minutes;

    cout << "Enter fuel consumption (liters per 100 km): ";
    cin >> fuelConsumption;

    cout << "Enter price per liter: ";
    cin >> pricePerLiter;

    // 3. Convert travel time into hours
    totalTime = hours + (minutes / 60.0);

    // 4. Calculate average speed
    averageSpeed = distance / totalTime;

    // 5. Calculate fuel used
    fuelUsed = (distance * fuelConsumption) / 100.0;

    // 6. Calculate fuel cost
    fuelCost = fuelUsed * pricePerLiter;

    // 7. Display results to two decimal places
    cout << fixed << setprecision(2);

    cout << "Average speed: " << averageSpeed << " km/h" << endl;
    cout << "Fuel used: " << fuelUsed << " liters" << endl;
    cout << "Fuel cost: " << fuelCost << " birr" << endl;

    return 0;
}
