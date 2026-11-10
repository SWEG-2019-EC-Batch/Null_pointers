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
