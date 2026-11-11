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