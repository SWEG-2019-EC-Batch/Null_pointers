
#include <iostream>
using namespace std;

int main()
{

    int route_choice;
    int age;
    int is_student;

    float baggage_in_kg;
    float baggage_fare = 0;
    float total_fare;

    float trip_fare;
    float baggage_rate;

    cout << "===== BUS TICKET BOOKING SYSTEM =====" << endl;

    cout << "Select your destination:" << endl;
    cout << "1. Addis Ababa to Bahir Dar" << endl;
    cout << "2. Addis Ababa to Jimma" << endl;
    cout << "3. Addis Ababa to Mekelle" << endl;
    cout << "4. Addis Ababa to Dire Dawa" << endl;
    cout << "5. Addis Ababa to Debre Berhan" << endl;

    cout << "Enter your choice: ";
    cin >> route_choice;

    switch (route_choice)
    {

    case 1:
        trip_fare = 1000;
        baggage_rate = 100;
        cout << "Destination: Bahir Dar" << endl;
        break;

    case 2:
        trip_fare = 800;
        baggage_rate = 80;
        cout << "Destination: Jimma" << endl;
        break;

    case 3:
        trip_fare = 600;
        baggage_rate = 60;
        cout << "Destination: Mekelle" << endl;
        break;

    case 4:
        trip_fare = 400;
        baggage_rate = 40;
        cout << "Destination: Dire Dawa" << endl;
        break;

    case 5:
        trip_fare = 200;
        baggage_rate = 40;
        cout << "estination: Debre Berhan" << endl;
        break;

    default:
        cout << "Invalid destination!" << endl;
        return 0;
    }

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your baggage weight in kg: ";
    cin >> baggage_in_kg;

    cout << "Are you a student? (1 = Yes, 0 = No): ";
    cin >> is_student;

    // Calculate the baggage fee
    total_fare = trip_fare;

    if (baggage_in_kg > 20)
    {
        baggage_fare = (baggage_in_kg - 20) * baggage_rate;
        total_fare = total_fare + baggage_fare;
    }

    // Apply passenger discount
    if (age < 12)
    {
        total_fare = total_fare - (total_fare * 0.5);
    }
    else if (age >= 60)
    {
        total_fare = total_fare - (total_fare * 0.25);
    }
    else if (is_student == 1)
    {
        total_fare = total_fare - (total_fare * 0.3);
    }
    else
    {
        cout << "No discount applied." << endl;
    }

    // Display the final ticket information
    cout << "===== TICKET INFORMATION =====" << endl;
    cout << "Trip fare: " << trip_fare << " birr" << endl;
    cout << "Baggage fee: " << baggage_fare << " birr" << endl;
    cout << "Total fare: " << total_fare << " birr" << endl;

    return 0;
}
