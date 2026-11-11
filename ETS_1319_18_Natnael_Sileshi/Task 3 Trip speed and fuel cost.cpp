#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Input variables
    double distance;        
    int    hours;         
    int    minutes;       
    double fuelPer100km;    
    double pricePerLiter;   

    // Read the inputs
    cout << "Enter distance (km): ";
    cin  >> distance;
    cout << "Enter travel time (hours): ";
    cin  >> hours;
    cout << "Enter travel time (minutes): ";
    cin  >> minutes;
    cout << "Enter fuel use (liters per 100 km): ";
    cin  >> fuelPer100km;
    cout << "Enter price per liter (birr): ";
    cin  >> pricePerLiter;

    // Convert travel time to hours (cast the minutes so we get a decimal result)
    double timeInHours = hours + static_cast<double>(minutes) / 60.0;

    // Average speed = distance / time
    double averageSpeed = distance / timeInHours;

    // Fuel used = (fuel per 100 km / 100) * distance
    double fuelUsed = (fuelPer100km / 100.0) * distance;

    // Fuel cost = fuel used * price per liter
    double fuelCost = fuelUsed * pricePerLiter;

    // Print results to two decimal places
    cout << fixed << setprecision(2);
    cout << "Average speed: " << averageSpeed << " km/h" << endl;
    cout << "Fuel used:     " << fuelUsed     << " liters" << endl;
    cout << "Fuel cost:     " << fuelCost     << " birr" << endl;

    return 0;
}