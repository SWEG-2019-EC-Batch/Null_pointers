#include <iostream>
using namespace std;

int main() {
    float basic_salary, hours_worked, bonus_rate =0;
    float bonus, penalty, gross_salary;
    float pension, tax, net_salary;
    int choice;

    // Input employee information
    cout << "Enter basic salary: ";
    cin >> basic_salary;

    cout << "Enter hours worked per week: ";
    cin >> hours_worked;


    // Calculate bonus and penalty
    if (hours_worked > 40) {

        cout << "Enter bonus rate per extra hour: ";
        cin >> bonus_rate;

        bonus = (hours_worked - 40) * bonus_rate;
    }
    else if (hours_worked < 40) {

        penalty = (40 - hours_worked) * (basic_salary / 40);
    }

    // Calculate gross salary
    gross_salary = basic_salary + bonus - penalty;

    // Calculate pension (7%)
    pension = gross_salary * 0.07;

/*
  NOTE:
  When an employee works extra hours, their salary
  may enter a higher tax range.

  If the new tax rate is applied to the whole salary,
  the employee may pay much more tax than before.

  As a result, an employee who works extra hours
  might take home less money than someone who
  worked fewer hours.

  This shows how applying one tax rate to the whole
  salary can sometimes be unfair to hardworking employees.

  Using progressive taxation solves this problem by applying
  higher tax rates only to the portion of salary in each
  higher tax bracket, making the system fairer.
*/

    // Calculate tax based on gross salary
    if (gross_salary >= 0 && gross_salary <= 3500) {
        tax = 0;
    }
    else if (gross_salary > 3500 && gross_salary <= 10000) {
        tax = gross_salary * 0.10;
    }
    else if (gross_salary > 10000 && gross_salary <= 25000) {
        tax = gross_salary * 0.15;
    }
    else if (gross_salary > 25000 && gross_salary <= 50000) {
        tax = gross_salary * 0.20;
    }
    else if (gross_salary > 50000 && gross_salary <= 100000) {
        tax = gross_salary * 0.25;
    }
    else if (gross_salary > 100000) {
        tax = gross_salary * 0.30;
    }
    else {
        cout << "Invalid salary!" << endl;
        return 0;
    }

    // Calculate net salary
    net_salary = gross_salary - pension - tax;

    // Display menu
    cout << "\n EMPLOYEE SALARY MENU " << endl;
    cout << "1. Gross Salary" << endl;
    cout << "2. Bonus Payment" << endl;
    cout << "3. Penalty Deduction" << endl;
    cout << "4. Pension Deduction" << endl;
    cout << "5. Tax Deduction" << endl;
    cout << "6. Net Salary" << endl;
    cout << "7. Display All Results" << endl;

    cout << "\nEnter your choice: ";
    cin >> choice;

    // Switch statement
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
            cout << "Pension Deduction: " << pension << endl;
            break;

        case 5:
            cout << "Tax Deduction: " << tax << endl;
            break;

        case 6:
            cout << "Net Salary: " << net_salary << endl;
            break;

        case 7:
            cout << "\n EMPLOYEE SALARY SUMMARY " << endl;
            cout << "Basic Salary: " << basic_salary << endl;
            cout << "Hours Worked: " << hours_worked << endl;
            cout << "Bonus Payment: " << bonus << endl;
            cout << "Penalty Deduction: " << penalty << endl;
            cout << "Gross Salary: " << gross_salary << endl;
            cout << "Pension (7%): " << pension << endl;
            cout << "Tax Deduction: " << tax << endl;
            cout << "Net Salary: " << net_salary << endl;
            break;

        default:
            cout << "Invalid choice! Please select 1-7." << endl;
    }

    return 0;
}