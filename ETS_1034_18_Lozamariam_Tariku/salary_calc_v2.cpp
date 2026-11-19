
#include <iostream>
using namespace std;

int main()
{

    // input
    double basa_salarly;
    float worked_hours;
    double bonus_payment = 0;
    double bonus_rate;
    double gross_salary;
    double tasx_deduction;
    double net_salary;
    double pension;
    int choice;
    int worker_type;
    const float pension_rate = 0.07;

    // Select worker type
    cout << "SELECT WORKER TYPE" << endl;
    cout << "1. Employee" << endl;
    cout << "2. Labor Worker" << endl;
    cout << "Enter your choice: ";
    cin >> worker_type;

    if (worker_type == 1)
    {

        cout << "Enter the base salary: ";
        cin >> basa_salarly;

        cout << "Enter the worked hours per week: ";
        cin >> worked_hours;

        cout << "Enter the bonus rate (birr/hour): ";
        cin >> bonus_rate;

        // Calculate bonus payment
        if (worked_hours > 40)
        {
            bonus_payment = (worked_hours - 40) * bonus_rate;
        }
        else if (worked_hours <= 40)
        {
            bonus_payment = 0;
        }

        // Calculate gross salary
        gross_salary = basa_salarly + bonus_payment;

        // Calculate tax deduction
        if (gross_salary >= 0 && gross_salary <= 3500)
        {
            tasx_deduction = 0;
        }
        else if (gross_salary > 3500 && gross_salary <= 10000)
        {
            tasx_deduction = gross_salary * 0.1;
        }
        else if (gross_salary > 10000 && gross_salary <= 25000)
        {
            tasx_deduction = gross_salary * 0.15;
        }
        else if (gross_salary > 25000 && gross_salary <= 50000)
        {
            tasx_deduction = gross_salary * 0.2;
        }
        else if (gross_salary > 50000 && gross_salary <= 100000)
        {
            tasx_deduction = gross_salary * 0.25;
        }
        else if (gross_salary > 100000)
        {
            tasx_deduction = gross_salary * 0.3;
        }
        else
        {
            cout << "Invalid input" << endl;
            return 0;
        }

        // Calculate pension
        pension = pension_rate * gross_salary;

        // Calculate net salary
        net_salary = gross_salary - (tasx_deduction + pension);

        // Employee salary menu
        cout << endl;
        cout << "EMPLOYEE SALARY INFORMATION MENU" << endl;
        cout << "1. View Gross Salary" << endl;
        cout << "2. View Bonus Payment" << endl;
        cout << "3. View Tax Deduction" << endl;
        cout << "4. View Pension" << endl;
        cout << "5. View Net Salary" << endl;
        cout << "6. View All Salary Information" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {

        case 1:
            cout << "Your gross salary is: " << gross_salary << endl;
            break;

        case 2:
            cout << "Your bonus payment is: " << bonus_payment << endl;
            break;

        case 3:
            cout << "Your tax deduction is: " << tasx_deduction << endl;
            break;

        case 4:
            cout << "Your pension is: " << pension << endl;
            break;

        case 5:
            cout << "Your net salary is: " << net_salary << endl;
            break;

        case 6:
            cout << "COMPLETE SALARY REPORT" << endl;
            cout << "Bonus Payment: " << bonus_payment << endl;
            cout << "Gross Salary: " << gross_salary << endl;
            cout << "Tax Deduction: " << tasx_deduction << endl;
            cout << "Pension: " << pension << endl;
            cout << "Net Salary: " << net_salary << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }
    }

    else if (worker_type == 2)
    {

        cout << "Enter the daily salary: ";
        cin >> basa_salarly;

        cout << "Enter the worked hours per day: ";
        cin >> worked_hours;

        cout << "Enter the bonus rate (birr/hour): ";
        cin >> bonus_rate;

        // Calculate bonus payment
        if (worked_hours > 8)
        {
            bonus_payment = (worked_hours - 8) * bonus_rate;
        }
        else if (worked_hours <= 8)
        {
            bonus_payment = 0;
        }

        // Calculate gross salary
        gross_salary = basa_salarly + bonus_payment;

        // Labor worker has no tax or pension
        net_salary = gross_salary;

        // Labor worker salary menu
        cout << endl;
        cout << "LABOR WORKER SALARY INFORMATION MENU" << endl;
        cout << "1. View Gross Salary" << endl;
        cout << "2. View Bonus Payment" << endl;
        cout << "3. View Net Salary" << endl;
        cout << "4. View All Salary Information" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {

        case 1:
            cout << "Your gross salary is: " << gross_salary << endl;
            break;

        case 2:
            cout << "Your bonus payment is: " << bonus_payment << endl;
            break;

        case 3:
            cout << "Your net salary is: " << net_salary << endl;
            break;

        case 4:
            cout << "COMPLETE SALARY REPORT" << endl;
            cout << "Bonus Payment: " << bonus_payment << endl;
            cout << "Gross Salary: " << gross_salary << endl;
            cout << "Net Salary: " << net_salary << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }
    }

    else
    {
        cout << "Invalid worker type!" << endl;
    }

    return 0;
}
