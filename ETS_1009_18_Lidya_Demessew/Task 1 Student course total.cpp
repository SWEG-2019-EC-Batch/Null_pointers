/* TASK 1(design and code only) 

Input: three marks, each out of 100 (assignment, midterm, final).
Output: the total to one decimal place, and the word Pass or Fail.
Process: compute the weighted total (20% + 30% + 50%), then compare it with the pass mark.

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
