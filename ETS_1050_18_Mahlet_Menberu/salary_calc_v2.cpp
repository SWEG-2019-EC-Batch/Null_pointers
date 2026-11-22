#include <iostream>
using namespace std;

int main() {
    float basic_salary = 0, hours_worked = 0, bonus_rate = 0;
    float bonus = 0, penalty = 0, gross_salary = 0;
    float pension = 0, tax = 0, net_salary = 0;
    float hourly_rate = 0;
    int choice, worker_type;
    char has_bonus, has_penalty;

    // Select worker type
    cout << "1. Employee" << endl;
    cout << "2. Labour Worker" << endl;
    cout << "Enter worker type: ";
    cin >> worker_type;

    if (worker_type == 1) {

        
        cout << "Enter basic salary: ";
        cin >> basic_salary;

        cout << "Enter hours worked per week: ";
        cin >> hours_worked;

        if (hours_worked > 40) {
            cout << "Enter bonus rate per extra hour: ";
            cin >> bonus_rate;

            bonus = (hours_worked - 40) * bonus_rate;
        }
        else if (hours_worked < 40) {
            penalty = (40 - hours_worked) * (basic_salary / 40);
        }

        gross_salary = basic_salary + bonus - penalty;

        // Pension (7%)
        pension = gross_salary * 0.07;

        // Tax calculation
        if (gross_salary >= 0 && gross_salary <= 3500) {
            tax = 0;
        }
        else if (gross_salary <= 10000) {
            tax = gross_salary * 0.10;
        }
        else if (gross_salary <= 25000) {
            tax = gross_salary * 0.15;
        }
        else if (gross_salary <= 50000) {
            tax = gross_salary * 0.20;
        }
        else if (gross_salary <= 100000) {
            tax = gross_salary * 0.25;
        }
        else if (gross_salary > 100000) {
            tax = gross_salary * 0.30;
        }
        else {
            cout << "Invalid salary!" << endl;
            return 0;
        }

        net_salary = gross_salary - pension - tax;
    }

    else if (worker_type == 2) {

        // Labour worker information
        cout << "Enter hours worked: ";
        cin >> hours_worked;

        cout << "Enter rate per hour: ";
        cin >> hourly_rate;

        gross_salary = hours_worked * hourly_rate;

        // Ask about bonus
        cout << "Does the labour worker have a bonus? (Y/N): ";
        cin >> has_bonus;

        if (has_bonus == 'Y' || has_bonus == 'y') {
            cout << "Enter bonus amount: ";
            cin >> bonus;
        }

        // Ask about damage or broken items
        cout << "Did the labour worker damage or break anything? (Y/N): ";
        cin >> has_penalty;

        if (has_penalty == 'Y' || has_penalty == 'y') {
            cout << "Enter penalty amount: ";
            cin >> penalty;
        }

        // Calculate labour worker salary
        gross_salary = (hours_worked * hourly_rate) + bonus;
        net_salary = gross_salary - penalty;

        // No pension and no tax for labour workers
        pension = 0;
        tax = 0;
    }

    else {
        cout << "Invalid worker type!" << endl;
        return 0;
    }

    
    cout << "\n SALARY MENU " << endl;
    cout << "1. Gross Salary" << endl;
    cout << "2. Bonus Payment" << endl;
    cout << "3. Penalty Deduction" << endl;

    if (worker_type == 1) {
        cout << "4. Pension Deduction" << endl;
        cout << "5. Tax Deduction" << endl;
    }

    cout << "6. Net Salary" << endl;
    cout << "7. Display All Results" << endl;

    cout << "\nEnter your choice: ";
    cin >> choice;

    
    switch (choice) {

        case 1:
            cout << "Gross Salary: " << gross_salary << endl;
            break;

        case 2:
            cout << "Bonus Payment: " << bonus << endl;
            break;

        case 3:
            cout << "Penalty Deduction: " << penalty << endl;
            break;

        case 4:
            if (worker_type == 1)
                cout << "Pension Deduction: " << pension << endl;
            else
                cout << "Labour workers have no pension deduction." << endl;
            break;

        case 5:
            if (worker_type == 1)
                cout << "Tax Deduction: " << tax << endl;
            else
                cout << "Labour workers have no tax deduction." << endl;
            break;

        case 6:
            cout << "Net Salary: " << net_salary << endl;
            break;

        case 7:
            cout << "\n SALARY SUMMARY " << endl;

            if (worker_type == 1) {
                cout << "Worker Type: Employee" << endl;
                cout << "Basic Salary: " << basic_salary << endl;
            }
            else {
                cout << "Worker Type: Labour Worker" << endl;
                cout << "Hourly Rate: " << hourly_rate << endl;
            }

            cout << "Hours Worked: " << hours_worked << endl;
            cout << "Bonus Payment: " << bonus << endl;
            cout << "Penalty Deduction: " << penalty << endl;
            cout << "Gross Salary: " << gross_salary << endl;
            cout << "Pension Deduction: " << pension << endl;
            cout << "Tax Deduction: " << tax << endl;
            cout << "Net Salary: " << net_salary << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}

