/* 
     Program Design(Algorithm)

1. Start
2. Declare four double variables: assignment, midterm, finalExam, and total
3. Ask the user to enter the assignment mark
4. Read the assignment mark
5. Ask the user to enter the midterm mark
6. Read the midterm mark
7. Ask the user to enter the final exam mark
8. Read the final exam mark
9. Calculate the total using:

   total = (assignment × 0.20) + (midterm × 0.30) + (finalExam × 0.50)

10. Display the total to one decimal place
11. Use the conditional operator to check whether the total is greater than or equal to 50
12. Display "Pass" if the total is at least 50; otherwise, display "Fail"
13. End
    */

//Actual code

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double assignment, midterm, finalExam, total;

    cout << "Enter assignment mark (out of 100): ";
    cin >> assignment;

    cout << "Enter midterm mark (out of 100): ";
    cin >> midterm;

    cout << "Enter final exam mark (out of 100): ";
    cin >> finalExam;

    total = (assignment * 0.20) + (midterm * 0.30) + (finalExam * 0.50);

    cout << "Total: " << endl;
    cout << fixed << setprecision(1) << total << endl;

    cout << "Result: " << (total >= 50 ? "Pass" : "Fail") << endl;

    return 0;
