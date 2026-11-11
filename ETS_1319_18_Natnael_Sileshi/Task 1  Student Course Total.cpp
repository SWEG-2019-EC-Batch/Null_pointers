 /*==========================================================================
      TASK 1: Course Total and Pass/Fail Program: Design Procedure
      --------------------------------------------------------------------------
      Input : assignment mark, midterm mark and final mark (each out of 100).
      Output: the weighted course total (one decimal place) and the word
              "Pass" or "Fail".
      Restriction: no if and no loops. Use the conditional operator to
                   decide Pass/Fail.
      Process: compute the weighted total, then use the conditional operator
               to choose the result word based on the pass mark.

      1. Variable types:
         assignment = double (Marks may have decimals, e.g. 78.5)
         midterm    = double (Marks may have decimals)
         final      = double (Marks may have decimals)
         total      = double (Weighted result with decimals)
         result     = string (Holds "Pass" or "Fail")

      2.1 Constants:
         const double ASSIGNMENT_WEIGHT = 0.20;   // 20% of the total
         const double MIDTERM_WEIGHT    = 0.30;   // 30% of the total
         const double FINAL_WEIGHT      = 0.50;   // 50% of the total
         const int    PASS_MARK         = 50;     // pass threshold

      2.2 Reading the input:
         cout << "Enter assignment mark (out of 100): ";
         cin  >> assignment;
         cout << "Enter midterm mark (out of 100): ";
         cin  >> midterm;
         cout << "Enter final mark (out of 100): ";
         cin  >> final;

      2.3 Calculation:
         The total is the sum of each mark multiplied by its weight. No
         casting is needed here because all marks and weights are already
         double.
         total = assignment * ASSIGNMENT_WEIGHT
               + midterm    * MIDTERM_WEIGHT
               + final      * FINAL_WEIGHT;

         The Pass/Fail decision is made with the conditional operator
         (no if): it returns "Pass" when total >= PASS_MARK, otherwise
         "Fail".
         result = (total >= PASS_MARK) ? "Pass" : "Fail";

      2.4 Printing the result:
         cout << fixed << setprecision(1);
         cout << "Course total: " << total  << endl;
         cout << "Result      : " << result << endl;
      ==========================================================================*/
#include <iostream>
using namespace std;
#include <iomanip>
int main(){
    //Constant for the weighting and pass marK
    const double ASSIGNMENT_WEIGHT = 0.20;
    const double MIDTERM_WEIGHT = 0.30;
    const double FINAL_WEIGHT = 0.50;
    const int    PASS_MARK         = 50;

    double assignment, midterm, final;

    // Read the three marks (each out of 100)
    cout << "Enter assignment mark (out of 100): ";
    cin  >> assignment;
    cout << "Enter midterm mark (out of 100): ";
    cin  >> midterm;
    cout << "Enter final mark (out of 100): ";
    cin  >> final;

    // Compute the weighted course total
    double total = (assignment * ASSIGNMENT_WEIGHT) + (midterm * MIDTERM_WEIGHT) + (final * FINAL_WEIGHT);

    // Print total to one decimal place
    cout << fixed << setprecision(1);
    cout << "Course total: " << total << endl;

    // Use the conditional operator to print Pass or Fail (no if)
    cout << "Result: " << (total >= PASS_MARK ? "Pass" : "Fail") << endl;

    return 0;
}
