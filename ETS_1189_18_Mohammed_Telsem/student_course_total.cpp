/*
Task 1: Student course total

(a) Inputs and Outputs
    Inputs:
      - assignment mark (out of 100)
      - midterm mark (out of 100)
      - final exam mark (out of 100)
    Outputs:
      - course total (one decimal place)
      - the word "Pass" or "Fail"

(b) Process
    1. Declare variables for the three marks and the total.
    2. Declare constants for the weights: 0.20, 0.30, 0.50.
    3. Ask the user to enter the assignment mark and read it.
    4. Ask the user to enter the midterm mark and read it.
    5. Ask the user to enter the final exam mark and read it.
    6. Calculate: total = (assignment * 0.20) + (midterm * 0.30) + (finalExam * 0.50).
    7. Set the output to fixed with one decimal place.
    8. Display the course total.
    9. Use the conditional operator to check if total >= 50,
       then display "Pass" if true, otherwise "Fail".
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double assignment, midterm, finalExam, total;

    const double A = 0.20;
    const double M = 0.30;
    const double F = 0.50;

    cout << "Enter assignment mark: ";
    cin >> assignment;

    cout << "Enter midterm mark: ";
    cin >> midterm;

    cout << "Enter final exam mark: ";
    cin >> finalExam;

    total = (assignment * A) + (midterm * M) + (finalExam * F);

    cout << fixed << setprecision(1);

    cout << "Course total: " << total << endl;

    cout << "Result: " << (total >= 50 ? "Pass" : "Fail") << endl;

    return 0;
}
