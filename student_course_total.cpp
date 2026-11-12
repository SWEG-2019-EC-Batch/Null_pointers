/*
1.inputs
Assignment mark,midterm mark,and final exam mark
2.output 
total mark
the result(pass/fail)
3.Process
Declare the variables(assignment,midterm,final exam,total mark,and result)
Read the the assignment, midterm, and final exam
Calculate the weighted total using the given percentages.use this formula to calculate the weighted total
       assignment mark by 0.20.
       midterm mark by 0.30.
      final exam mark by 0.50.
Add the three contributions to calculate the total course mark
Use the conditional operator to determine whether the student passes or fails
use the following conditonal operator 
    result = (total >= PASS_MARK) ? "Pass" : "Fail";
Display the total mark to one decimal place.
Display the result (Pass or Fail).    
 complete C++ program.
*/

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main (){

// 1. declare variables
double assignment;
double midterm;
double finalExam;
double total;
string result;

// 2. Declare constants for the percentages and pass mark
    const double ASSIGNMENT_WEIGHT = 0.20;
    const double MIDTERM_WEIGHT = 0.30;
    const double FINAL_WEIGHT = 0.50;
    const double PASS_MARK = 50.0;

 // 3. Read the student's marks
    cout << "Enter assignment mark: ";
    cin >> assignment;

    cout << "Enter midterm mark: ";
    cin >> midterm;

    cout << "Enter final exam mark: ";
    cin >> finalExam;

  // 4. Calculate the weighted contribution of each mark
    double assignmentTotal = assignment * ASSIGNMENT_WEIGHT;
    double midtermTotal = midterm * MIDTERM_WEIGHT;
    double finalTotal = finalExam * FINAL_WEIGHT;
     // 5. Calculate the total course mark
    total = assignmentTotal + midtermTotal + finalTotal;

    // 6. Determine the result using the conditional operator
    result = (total >= PASS_MARK) ? "Pass" : "Fail";

    // 7. Display the total to one decimal place
    cout << fixed << setprecision(1);

    cout << "Total mark: " << total << endl;
    cout << "Result: " << result << endl;
    return 0;
}