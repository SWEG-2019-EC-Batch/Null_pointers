#include <iostream>
using namespace std;

int main()
{
    int worker_type;
    double base_salary = 0;
    double hourly_rate = 0;
    double worked_hours;
    double bonus_rate;
    double bonus_payment = 0;
    double penalty = 0;
    double gross_salary = 0;
    double tax_reduction = 0;
    double pension = 0;
    double net_salary;

    cout << "Enter worker type:" << endl;
    cout << "1. Employee" << endl;
    cout << "2. Laborer" << endl;
    cout << "Your choice: ";
    cin >> worker_type;

    if (worker_type == 1)
    {
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
    }
    else if (worker_type == 2)
    {
        int has_bonus;
        int damaged;

        cout << "Enter your hourly rate(birr/hr): ";
        cin >> hourly_rate;
        cout << "Enter the worked hour: ";
        cin >> worked_hours;

        cout << "Do you have a bonus? (1 = Yes, 2 = No): ";
        cin >> has_bonus;

        if (has_bonus == 1)
        {
            cout << "Enter the bonus amount(birr): ";
            cin >> bonus_payment;
        }
        else
        {
            cout << "You have no bonus!!" << endl;
        }

        cout << "Did you damage any machinery? (1 = Yes, 2 = No): ";
        cin >> damaged;

        if (damaged == 1)
        {
            cout << "Enter the penalty amount(birr): ";
            cin >> penalty;
        }
        else
        {
            cout << "You have no penalty!!" << endl;
        }

        gross_salary = (hourly_rate * worked_hours) + bonus_payment - penalty;

        if (gross_salary < 0)
        {
            gross_salary = 0;
        }

        pension = 0;
        tax_reduction = 0;
        net_salary = gross_salary;
        cout << "No tax or pension is applied for laborers!" << endl;
    }
    else
    {
        cout << "Invalid worker type!" << endl;
        return 0;
    }

    cout << "Enter a number on what you want to look: " << endl;
    cout << "1. Bonus payment" << endl;
    cout << "2. Penalty" << endl;
    cout << "3. Gross salary" << endl;
    cout << "4. Pension" << endl;
    cout << "5. Tax reduction" << endl;
    cout << "6. Net salary" << endl;
    cout << "7. All of the above" << endl;
    cout << "Your choice: ";
    int choice;
    cin >> choice;

    switch (choice){

        case 1:
            cout << "Your bonus payment is: " << bonus_payment << endl;
            break;
        case 2:
            cout << "Your penalty is: " << penalty << endl;
            break;
        case 3:
            cout << "Your gross salary is: " << gross_salary << endl;
            break;
        case 4:
            cout << "Your pension is: " << pension << endl;
            break;
        case 5:
            cout << "Your tax reduction is: " << tax_reduction << endl;
            break;
        case 6:
            cout << "Your net salary is: " << net_salary << endl;
            break;
        case 7:
            cout << "Your bonus payment is: " << bonus_payment << endl;
            cout << "Your penalty is: " << penalty << endl;
            cout << "Your gross salary is: " << gross_salary << endl;
            cout << "Your pension is: " << pension << endl;
            cout << "Your tax reduction is: " << tax_reduction << endl;
            cout << "Your net salary is: " << net_salary << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}
