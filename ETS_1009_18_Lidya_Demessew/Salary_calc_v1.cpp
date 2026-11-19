#include <iostream>
using namespace std;

int main()
{
    double base_salary;
    double worked_hours;
    double bonus_rate;
    double bonus_payment = 0;
    double gross_salary;
    double tax_reduction = 0;
    double net_salary;
    double pension;
    double reduction;

    cout << "Enter your base salary: ";
    cin >> base_salary;
    cout << "Enter the worked hour: ";
    cin >> worked_hours;

    if (worked_hours > 40)
    {
        cout << "Enter the bonus rate(birr/hr): ";
        cin >> bonus_rate;
        bonus_payment = bonus_rate * (worked_hours - 40);
    }
    else
    {
        cout << "You have no bonus!!" << endl;
    }

    gross_salary = base_salary + bonus_payment;

    pension = 0.07 * gross_salary;

    if (gross_salary >= 0 && gross_salary <= 3500)
    {
        tax_reduction = 0;
        cout << "No tax is applied!" << endl;
    }
    else if (gross_salary > 3500 && gross_salary <= 10000)
    {
        tax_reduction = gross_salary * 0.1;
    }
    else if (gross_salary > 10000 && gross_salary <= 25000)
    {
        tax_reduction = gross_salary * 0.15;
    }
    else if (gross_salary > 25000 && gross_salary <= 50000)
    {
        tax_reduction = gross_salary * 0.2;
    }
    else if (gross_salary > 50000 && gross_salary <= 100000)
    {
        tax_reduction = gross_salary * 0.25;
    }
    else if (gross_salary > 100000)
    {
        tax_reduction = gross_salary * 0.3;
    }
    else
    {
        cout << "Invalid input!" << endl;
    }

    net_salary = gross_salary - pension - tax_reduction;
    
    cout << "Enter a number on what you want to look: " << endl;
    cout << "1. Bonus payment" << endl;
    cout << "2. Gross salary"  << endl;
    cout << "3. Pension" << endl;
    cout << "4. Tax reduction" << endl;
    cout << "5. Net salary" << endl;
    cout << "6. All of the above" << endl;
    cout << "Your choice: ";
    int choice;
    cin >> choice;

    switch (choice){

        case 1:
            cout << "Your bonus payment is: " << bonus_payment << endl;
            break;
        case 2:
            cout << "your Gross salary is: " << gross_salary << endl;
            break;
        case 3:
            cout << "your pension is: " << pension << endl;
            break;
        case 4:
            cout << "your tax reduction is: " << tax_reduction << endl;
            break;
        case 5:
            cout << "your net salary is: " << net_salary << endl;
            break;
        case 6:
            cout << "Your bonus payment is: " << bonus_payment << endl;
            cout << "your Gross salary is: " << gross_salary << endl;
            cout << "your pension is: " << pension << endl;
            cout << "your tax reduction is: " << tax_reduction << endl;
            cout << "your net salary is: " << net_salary << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}
