/*
=====================================================================
 DESIGN PROCESS: SALARY CALCULATOR (EMPLOYEE & LABORER)
=====================================================================
 OBJECTIVE:
 Calculate salary for either an employee or a laborer based on 
 user selection.

 EMPLOYEE MODE:
   - Inputs: base salary, weekly hours, bonus rate (overtime)
   - Deductions: pension (7%), progressive tax
   - Overtime/undertime logic based on 40-hour week

 LABORER MODE:
   - Inputs: worked hours, hourly rate, bonus (optional), 
             machinery damage penalty (optional)
   - NO tax or pension deductions
   - Gross = (hours * hourly rate) + bonus - penalty
   - Net = Gross (no deductions)

 OUTPUTS:
   - Menu to display specific details or all
=====================================================================
*/

#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
    int workerType = 0;

    cout << "Select worker type:\n";
    cout << "1. Employee\n";
    cout << "2. Laborer\n";
    cout << "Choose (1-2): ";
    cin >> workerType;

    // Format money to 2 decimal places
    cout << fixed << setprecision(2);

    if (workerType == 1)
    {
        // ---------------- EMPLOYEE ----------------
        double bonusPay = 0.0;
        double baseSalary = 0.0;
        double numHours = 0.0;
        double bonusRate = 0.0;
        const double weekHour = 40.0;
        double grossSalary = 0.0;
        double pension = 0.0;
        double net = 0.0, tax = 0.0, deducted_Pay = 0.0;
        int choice = 0;

        cout << "Write your base salary: ";
        cin >> baseSalary;
        cout << "Input the numbers of hours worked in a week: ";
        cin >> numHours;

        if (numHours > weekHour)
        {
            cout << "Enter your bonus rate: ";
            cin >> bonusRate;
            bonusPay = (numHours - weekHour) * bonusRate;
            grossSalary = baseSalary + bonusPay;
        } else {
            deducted_Pay = (weekHour - numHours) * (baseSalary / weekHour);
            grossSalary = baseSalary - deducted_Pay;
        }

        // Pension deduction
        pension = grossSalary * 0.07;

        // Tax deduction (progressive)
        if (grossSalary > 100000)
            tax = grossSalary * 0.3;
        else if (grossSalary > 50000)
            tax = grossSalary * 0.25;
        else if (grossSalary > 25000)
            tax = grossSalary * 0.2;
        else if (grossSalary > 10000)
            tax = grossSalary * 0.15;
        else if (grossSalary > 3500)
            tax = grossSalary * 0.1;
        else
            tax = 0;

        net = grossSalary - tax - pension;

        cout << "\nAvailable choices:\n";
        cout << "1. Gross Salary\n";
        cout << "2. Pension\n";
        cout << "3. Tax\n";
        cout << "4. Net Salary\n";
        cout << "5. Bonus Pay\n";
        cout << "6. Undertime Deduction\n";
        cout << "7. All\n";
        cout << "Choose one to see (1-7): ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Your gross Salary is: " << grossSalary << endl;
                break;
            case 2:
                cout << "Your pension deduction is: " << pension << endl;
                break;
            case 3:
                cout << "Your tax deduction is: " << tax << endl;
                break;
            case 4:
                cout << "Your net salary is: " << net << endl;
                break;
            case 5:
                cout << "Your bonus pay is: " << bonusPay << endl;
                break;
            case 6:
                cout << "Your undertime deduction is: " << deducted_Pay << endl;
                break;
            case 7:
                cout << "Your gross Salary is: " << grossSalary << endl;
                cout << "Your pension deduction is: " << pension << endl;
                cout << "Your tax deduction is: " << tax << endl;
                cout << "Your net salary is: " << net << endl;
                cout << "Your bonus pay is: " << bonusPay << endl;
                cout << "Your undertime deduction is: " << deducted_Pay << endl;
                break;
            default:
                cout << "Invalid choice. Please choose 1-7." << endl;
                break;
        }
    }
    else if (workerType == 2)
    {
        // ---------------- LABORER ----------------
        double workedHours = 0.0;
        double hourlyRate = 0.0;
        double bonus = 0.0;
        double penalty = 0.0;
        char hasBonus = 'n';
        char hasPenalty = 'n';
        double grossSalary = 0.0;
        double net = 0.0;
        int choice = 0;

        cout << "Enter worked hours: ";
        cin >> workedHours;
        cout << "Enter hourly rate: ";
        cin >> hourlyRate;

        cout << "Does the laborer have a bonus? (y/n): ";
        cin >> hasBonus;
        if (hasBonus == 'y' || hasBonus == 'Y')
        {
            cout << "Enter bonus amount: ";
            cin >> bonus;
        }

        cout << "Did the laborer damage any machinery? (y/n): ";
        cin >> hasPenalty;
        if (hasPenalty == 'y' || hasPenalty == 'Y')
        {
            cout << "Enter salary penalty amount: ";
            cin >> penalty;
        }

        // Gross = (hours * rate) + bonus - penalty
        grossSalary = (workedHours * hourlyRate) + bonus - penalty;
        if (grossSalary < 0) grossSalary = 0; // prevent negative

        // No tax or pension for laborers
        net = grossSalary;

        cout << "\nAvailable choices:\n";
        cout << "1. Gross Salary\n";
        cout << "2. Bonus\n";
        cout << "3. Salary Penalty\n";
        cout << "4. Net Salary\n";
        cout << "5. All\n";
        cout << "Choose one to see (1-5): ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Your gross salary is: " << grossSalary << endl;
                break;
            case 2:
                cout << "Your bonus is: " << bonus << endl;
                break;
            case 3:
                cout << "Your salary penalty is: " << penalty << endl;
                break;
            case 4:
                cout << "Your net salary is: " << net << endl;
                break;
            case 5:
                cout << "Worked hours: " << workedHours << endl;
                cout << "Hourly rate: " << hourlyRate << endl;
                cout << "Your gross salary is: " << grossSalary << endl;
                cout << "Your bonus is: " << bonus << endl;
                cout << "Your salary penalty is: " << penalty << endl;
                cout << "Your net salary is: " << net << endl;
                break;
            default:
                cout << "Invalid choice. Please choose 1-5." << endl;
                break;
        }
    }
    else
    {
        cout << "Invalid worker type. Please choose 1 or 2." << endl;
    }

    return 0;
}