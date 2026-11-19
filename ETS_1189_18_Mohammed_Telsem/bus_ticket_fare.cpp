#include <iostream>
using namespace std;

int main() {
    float bagWeight, total, extra = 0, fare = 0, discount = 0;
    int avaSeat, age, route;
    char student;

    cout << "Enter Number of available seat: ";
    cin >> avaSeat;

    if (avaSeat > 0) {
        cout << "\nStarting point: Addis Ababa\n";
        cout << "Enter 1 for Adama\n";
        cout << "Enter 2 for Hawassa\n";
        cout << "Enter 3 for Bahir Dar\n";
        cout << "Enter 4 for Jimma\n";
        cout << "Enter 5 for Arba Minch\n";
        cout << "Your choice: ";
        cin >> route;

        switch (route) {
            case 1: fare = 200;  break;
            case 2: fare = 800;  break;
            case 3: fare = 1200; break;
            case 4: fare = 500;  break;
            case 5: fare = 700;  break; // placeholder, change it
            default:
                cout << "Invalid route!";
                return 0;
        }

        cout << "Enter your age: ";
        cin >> age;
        cout << "Are you a student? (y/n): ";
        cin >> student;
        cout << "Enter baggage weight: ";
        cin >> bagWeight;

        if (age < 12 && (student == 'y' || student == 'Y')) {
            discount = fare * 0.80;      // 50% + 30%
        } else if (age < 12) {
            discount = fare * 0.50;
        } else if (age > 60 && (student == 'y' || student == 'Y')) {
            discount = fare * 0.55;      // 25% + 30%
        } else if (age > 60) {
            discount = fare * 0.25;
        } else if (student == 'y' || student == 'Y') {
            discount = fare * 0.30;
        } else {
            discount = 0;
        }

        if (bagWeight > 20) {
            extra = (bagWeight - 20) * 10;
        }

        total = (extra + fare) - discount;

        cout << "\nYour base fare is: " << fare << endl;
        cout << "Your discount is: " << discount << endl;
        cout << "Your extra weight fee is: " << extra << endl;
        cout << "Your total fare is: " << total << endl;
    } else {
        cout << "All seats are reserved";
    }
    return 0;
}