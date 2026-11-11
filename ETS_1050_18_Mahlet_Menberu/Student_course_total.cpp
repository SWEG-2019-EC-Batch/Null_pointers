/* 
     IPO (Input, Process, Output)
1. Input
-Assignment mark (out of 100)
-Midterm mark (out of 100)
-Final exam mark (out of 100)

2. process
-Declare four double variables: assignment, midterm, finalExam, and total
-Get the assignment, midterm, and final exam marks from the user
-Calculate the total using the given percentages (20%, 30%, and 50%)
-Display the word "Total"
-Display the total mark to one decimal place
-Check whether the total mark is greater than or equal to 50
-Print "Pass" if the total is 50 or above; otherwise, print "Fail"

3. Output
-print the total mark to one decimal place
-print the result ("Pass" or "Fail")


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
}
