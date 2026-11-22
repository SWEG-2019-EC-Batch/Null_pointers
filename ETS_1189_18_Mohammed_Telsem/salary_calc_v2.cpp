#include <iostream>
using namespace std;

int main() {
    int employeeType, choice, answer;
    float baseSalary = 0, numHours = 0, bonusRate = 0, hourlyRate = 0;
    float bonus = 0, penalty = 0, grossSalary = 0;
    float tax, pension, netSalary;

    cout << "Employee type:" << endl;
    cout << "1 = Base salary employee" << endl;
    cout << "2 = Labor worker (paid per hour)" << endl;
    cin >> employeeType;

    if (employeeType == 1) {
        // ---------- Base salary employee ----------
        cout << "Enter your base salary: " << endl;
        cin >> baseSalary;
        cout << "Please enter number of hours worked per week: " << endl;
        cin >> numHours;

        if (numHours > 40) {
            cout << "Please enter your bonus rate: " << endl;
            cin >> bonusRate;
            bonus = (numHours - 40) * bonusRate;
        } else if (numHours < 40) {
            penalty = (40 - numHours) * (baseSalary / 40.0);
        }

        grossSalary = baseSalary + bonus;

    } else if (employeeType == 2) {
        // ---------- Labor worker ----------
        cout << "Enter number of hours worked: " << endl;
        cin >> numHours;
        cout << "Enter amount paid per hour: " << endl;
        cin >> hourlyRate;

        cout << "Is there a bonus? (1 = yes, 0 = no)" << endl;
        cin >> answer;
        if (answer == 1) {
            cout << "Enter bonus amount: " << endl;
            cin >> bonus;
        }

        cout << "Is there a penalty? (1 = yes, 0 = no)" << endl;
        cin >> answer;
        if (answer == 1) {
            cout << "Enter penalty amount: " << endl;
            cin >> penalty;
        }

        grossSalary = (numHours * hourlyRate) + bonus;

    } else {
        cout << "Invalid employee type" << endl;
        return 0;
    }

    // ---------- Tax (same for both types) ----------
    if (grossSalary > 100000) {
        tax = grossSalary * 0.3;
    } else if (grossSalary > 50000) {
        tax = grossSalary * 0.25;
    } else if (grossSalary > 25000) {
        tax = grossSalary * 0.2;
    } else if (grossSalary > 10000) {
        tax = grossSalary * 0.15;
    } else if (grossSalary > 3500) {
        tax = grossSalary * 0.1;
    } else {
        tax = 0;
    }

    pension = grossSalary * 0.07;
    netSalary = grossSalary - (tax + pension) - penalty;

    cout << "What do you want to see?" << endl;
    cout << "1 = Gross salary" << endl;
    cout << "2 = Bonus" << endl;
    cout << "3 = Pension" << endl;
    cout << "4 = Tax" << endl;
    cout << "5 = Net salary" << endl;
    cout << "6 = Penalty" << endl;
    cout << "7 = Show all" << endl;
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Your gross salary is: " << grossSalary << endl;
            break;
        case 2:
            cout << "Your bonus is: " << bonus << endl;
            break;
        case 3:
            cout << "Your pension deduction is: " << pension << endl;
            break;
        case 4:
            cout << "Your tax deduction is: " << tax << endl;
            break;
        case 5:
            cout << "Your net salary is: " << netSalary << endl;
            break;
        case 6:
            cout << "Your penalty is: " << penalty << endl;
            break;
        case 7:
            cout << "Your gross salary is: " << grossSalary << endl;
            cout << "Your bonus is: " << bonus << endl;
            cout << "Your pension deduction is: " << pension << endl;
            cout << "Your tax deduction is: " << tax << endl;
            cout << "Your penalty is: " << penalty << endl;
            cout << "Your net salary is: " << netSalary << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }
    return 0;
}