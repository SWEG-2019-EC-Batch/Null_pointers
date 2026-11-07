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
