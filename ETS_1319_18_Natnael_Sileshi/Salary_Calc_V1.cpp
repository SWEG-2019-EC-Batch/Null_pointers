/*
=====================================================================
 DESIGN PROCESS: EMPLOYEE SALARY CALCULATOR
=====================================================================
 OBJECTIVE:
 Calculate an employee's gross, net, tax, and pension based on their 
 base salary and weekly hours worked, and display a user-selected receipt.

 1. INPUTS:
    - baseSalary (double): The starting salary.
    - numHours (double): Total hours worked in the week.
    - bonusRate (double): Extra pay rate per hour for overtime (conditional).
    - choice (int): Menu selection to display specific payroll details.

 2. CONSTANTS:
    - weekHour (const double = 40.0): Standard working hours.

 3. PROCESSING (Calculations):
    Step A: Overtime / Undertime Logic
            - IF numHours > 40: Calculate bonusPay and add to baseSalary.
            - ELSE: Calculate deducted_Pay and subtract from baseSalary.
            *Note: Cast/use double to prevent integer division truncation.*
    
    Step B: Pension Deduction
            - pension = grossSalary * 0.07 (7% of gross).
            
    Step C: Progressive Tax Calculation
            - Use an if-else if ladder to apply tax brackets based on grossSalary.
            - Ranges: >100k (30%), >50k (25%), >25k (20%), 
                      >10k (15%), >3.5k (10%), ELSE (0%).
                      
    Step D: Net Salary Calculation
            - net = grossSalary - tax - pension.

 4. OUTPUTS (User Interface & Display):
    - Prompt user for inputs.
    - Display a menu with 7 options (Gross, Pension, Tax, Net, Bonus, 
      Undertime Deduction, All).
    - Use a switch statement to route to the correct print statement.
    - Apply formatting (fixed, setprecision(2)) for currency display.

 5. EDGE CASES HANDLED:
    - Variables initialized to 0.0 to prevent garbage memory output.
    - Total is forced to 0 if deductions exceed the base salary.
    - Invalid menu choices caught by the default case.
=====================================================================
*/

#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
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

    // Tax deduction
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

    // Format money to 2 decimal places
    cout << fixed << setprecision(2); 

    cout << "\nAvailable choices:\n";
    cout << "1. Gross Salary\n";
    cout << "2. Pension\n";
    cout << "3. Tax\n";
    cout << "4. Net Salary\n";
    cout << "5. Bonus Pay\n";
    cout << "6. Undertime Deduction\n"; // NEW OPTION
    cout << "7. All\n";                 // SHIFTED FROM 6 TO 7
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
            cout << "Your undertime deduction is: " << deducted_Pay << endl; // NEW CASE
            break;
        case 7:
            cout << "Your gross Salary is: " << grossSalary << endl;
            cout << "Your pension deduction is: " << pension << endl;
            cout << "Your tax deduction is: " << tax << endl;
            cout << "Your net salary is: " << net << endl;
            cout << "Your bonus pay is: " << bonusPay << endl;
            cout << "Your undertime deduction is: " << deducted_Pay << endl; // ADDED TO "ALL"
            break;
        default:
            cout << "Invalid choice. Please choose 1-7." << endl;
            break;
    }

    return 0;
}