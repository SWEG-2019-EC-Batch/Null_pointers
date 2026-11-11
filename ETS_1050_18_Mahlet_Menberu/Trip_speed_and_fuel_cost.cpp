/*
     IPO (Input, Process, Output)

1. Input
- Distance of the trip in kilometers (km)
- Travel time in hours
- Travel time in minutes
- Fuel consumption in liters per 100 kilometers (L/100km)
- Fuel price per liter in birr

2. Process
- Declare seven double variables: distance, fuelConsumption, fuelPrice, time, averageSpeed, fuelUsed, and fuelCost
- Declare two integer variables: hours and minutes
- Get the distance, travel hours, travel minutes, fuel consumption, and fuel price from the user
- Convert the travel time into hours by adding hours and minutes divided by 60
- Calculate the average speed by dividing distance by total travel time
- Calculate the fuel used by multiplying distance by fuel consumption and dividing by 100
- Calculate the fuel cost by multiplying fuel used by fuel price
- Print the average speed, fuel used, and fuel cost to two decimal places

3. Output
- Print the average speed in km/h
- Print the fuel used in liters
- Print the fuel cost in birr


     Program Design (Algorithm)

1. Start
2. Declare seven double variables: distance, fuelConsumption, fuelPrice, time, averageSpeed, fuelUsed, and fuelCost
3. Declare two integer variables: hours and minutes
4. Ask the user to enter the trip distance in kilometers
5. Read the distance
6. Ask the user to enter the travel time in hours
7. Read the hours
8. Ask the user to enter the travel time in minutes
9. Read the minutes
10. Ask the user to enter the fuel consumption in liters per 100 kilometers
11. Read the fuel consumption
12. Ask the user to enter the fuel price per liter
13. Read the fuel price
14. Convert the travel time into hours using:

    time = hours + (minutes / 60.0)

15. Calculate the average speed using:

    averageSpeed = distance / time

16. Calculate the fuel used using:

    fuelUsed = (distance * fuelConsumption) / 100.0

17. Calculate the fuel cost using:

    fuelCost = fuelUsed * fuelPrice

18. Display the average speed to two decimal places
19. Display the fuel used to two decimal places
20. Display the fuel cost to two decimal places
21. End
*/


// Actual code

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double distance, fuelConsumption, fuelPrice, time, averageSpeed, fuelUsed, fuelCost;
    int hours, minutes;

    cout << "Enter distance in km (number only): ";
    cin >> distance;

    cout << "Enter travel hours (numberonly) : ";
    cin >> hours;

    cout << "Enter travel minutes (number only) : ";
    cin >> minutes;

    cout << "Enter fuel consumption (L/100km) (numberonly) : ";
    cin >> fuelConsumption;

    cout << "Enter fuel price per liter (numberonly) : ";
    cin >> fuelPrice;

    time = hours + (minutes / 60.0);

    averageSpeed = distance / time;

    fuelUsed = (distance * fuelConsumption) / 100.0;

    fuelCost = fuelUsed * fuelPrice;

    cout << fixed << setprecision(2);

    cout << "Average Speed: " << averageSpeed << " km/h" << endl;
    cout << "Fuel Used: " << fuelUsed << " liters" << endl;
    cout << "Fuel Cost: " << fuelCost << " birr" << endl;

    return 0;
}
