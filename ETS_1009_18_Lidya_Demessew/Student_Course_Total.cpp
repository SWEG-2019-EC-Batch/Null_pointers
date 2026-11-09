/* TASK 1(design and code only) 
1.1 Variable Type
assignment = double (Marks may have decimals (e.g. 87.5).)
midterm = double (Same reason.)
finalExam = double (Same reason. (final is a C++ keyword in some contexts, so a safer name is used.)
total = double (Weighted result is usually fractional.)
result = string (Holds the word "Pass" or "Fail".)
1.2 Constants
const double ASSIGN_WEIGHT  = 0.20;
const double MIDTERM_WEIGHT = 0.30;
const double FINAL_WEIGHT   = 0.50;
const double PASS_MARK      = 50.0;
1.3 Reading the input
cout << "Enter assignment, midterm and final marks (each out of 100) separated by space: ";
cin >> assignment >> midterm >> finalExam;
1.4 Calculation
total  = assignment * ASSIGN_WEIGHT
       + midterm    * MIDTERM_WEIGHT
       + finalExam  * FINAL_WEIGHT;

result = (total >= PASS_MARK) ? "Pass" : "Fail";
The conditional operator replaces the if: if total >= 50 is true, result gets "Pass", otherwise "Fail".
Printing the result
cout << fixed << setprecision(1);
cout << "Total  : " << total  << endl;
cout << "Result : " << result << endl;
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    const double ASSIGN_WEIGHT  = 0.20;
    const double MIDTERM_WEIGHT = 0.30;
    const double FINAL_WEIGHT   = 0.50;
    const double PASS_MARK      = 50.0;

    double assignment, midterm, finalExam, total;
    string result;

    cout << "Enter assignment: ";
    cin >> assignment;
    cout << "Enter midterm: ";
    cin >> midterm;
    cout << "Enter final exam: ";
    cin >> finalExam;

    total  = assignment * ASSIGN_WEIGHT
           + midterm    * MIDTERM_WEIGHT
           + finalExam  * FINAL_WEIGHT;

    result = (total >= PASS_MARK) ? "Pass" : "Fail";

    cout << fixed << setprecision(1);
    cout << "Total  : " << total  << endl;
    cout << "Result : " << result << endl;

    return 0;
}


/* TASK 2(INPUT, OUTPUT, PROCESS, DESIGN AND CODE) 

Input: units used in the month (kWh, a whole number)
Output: the energy charge, the service charge and the total bill, each to two decimal places
Process: charge 1.50 birr for each of the first 50 units and 2.00 birr for each unit above 50, then add a fixed 10 birr service charge.

design:
Variables: what and how?
Variable	
units = int(Units are a whole number of kWh.)
firstUnits = int(Count of units charged at the first rate (at most 50))
extraUnits = int(Count of units above 50 (0 if the customer used 50 or less))
energyCharge = double(Money result with decimals)
total = double(Money result with decimals)

Constants
const int BLOCK_LIMIT = 50;
const double RATE_FIRST = 1.50;
const double RATE_ABOVE = 2.00;
const double SERVICE_CHARGE = 10.0;

Reading the input
cout << "Enter the units used this month (kWh): ";
cin >> units;

calculation
firstUnits = (units < BLOCK_LIMIT) ? units : BLOCK_LIMIT;
extraUnits = (units > BLOCK_LIMIT) ? (units - BLOCK_LIMIT) : 0;
energyCharge = firstUnits * RATE_FIRST + extraUnits * RATE_ABOVE;
total = energyCharge + SERVICE_CHARGE;

Printing the result
cout << fixed << setprecision(2);
cout << "Energy charge : " << energyCharge << " birr" << endl;
cout << "Service charge: " << SERVICE_CHARGE << " birr" << endl;
cout << "Total bill: " << total << " birr" << endl;
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int    BLOCK_LIMIT    = 50;
    const double RATE_FIRST     = 1.50;
    const double RATE_ABOVE     = 2.00;
    const double SERVICE_CHARGE = 10.0;

    int units, firstUnits, extraUnits;
    double energyCharge, total;

    cout << "Enter the units used this month (kWh): ";
    cin >> units;
       
    firstUnits = (units < BLOCK_LIMIT) ? units : BLOCK_LIMIT;
    extraUnits = (units > BLOCK_LIMIT) ? (units - BLOCK_LIMIT) : 0;

    energyCharge = firstUnits * RATE_FIRST + extraUnits * RATE_ABOVE;
    total        = energyCharge + SERVICE_CHARGE;

    cout << fixed << setprecision(2);
    cout << "Energy charge : " << energyCharge   << " birr" << endl;
    cout << "Service charge: " << SERVICE_CHARGE << " birr" << endl;
    cout << "Total bill    : " << total          << " birr" << endl;

    return 0;
}
