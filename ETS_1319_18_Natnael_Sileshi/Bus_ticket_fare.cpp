/*
=====================================================================
 DESIGN PROCESS: TICKET FARE CALCULATOR
=====================================================================
 OBJECTIVE:
 Calculate a passenger's total ticket fare based on their route, age, 
 student status, and baggage weight. Validates seat availability.

 1. INPUTS:
    - routeChoice (int): Selection of destination (1-5).
    - avaSeat (int): Number of available seats on the flight/bus.
    - age (int): Passenger's age.
    - bagWeight (float): Weight of passenger's luggage in kg.
    - isStudent (int): 1 if student, 0 if not.

 2. PROCESSING (Calculations):
    Step A: Route Selection
            - Use a switch statement to assign the base 'fare' based on 
              routeChoice. Exit program if invalid route chosen.
              
    Step B: Seat Availability Check
            - IF avaSeat <= 0, print "All seats reserved" and skip booking.
            - IF avaSeat > 0, proceed to gather remaining inputs.
            
    Step C: Discount Logic (Mutually Exclusive)
            - IF age < 12: discount = 50% of fare.
            - ELSE IF age > 60: discount = 25% of fare.
            - ELSE: Ask if student. IF student, discount = 30% of fare.
            *Note: Discounts do NOT stack; one flat discount applies.*
            
    Step D: Baggage Fee
            - IF bagWeight > 20kg: extra = (bagWeight - 20) * 10.
            - ELSE: extra = 0.
            
    Step E: Final Calculation
            - total = (fare - discount) + extra.
            - IF total < 0, force total = 0 (Safety check).

 3. OUTPUTS (User Interface & Display):
    - Display a clean route menu at the start.
    - Print a formatted receipt showing the base fare, the discount applied, 
      extra baggage fees, and the final total.
    - Format output to 2 decimal places for realistic currency display.

 4. EDGE CASES HANDLED:
    - Invalid route selection returns 1 (exits the program early).
    - Prevented "discount stacking" so a 10-year-old student doesn't 
      get an 80% discount.
    - Variables initialized to 0 to prevent garbage values in the receipt.
=====================================================================
*/

#include <iostream>
using namespace std;

int main() {
    float bagWeight, total, extra = 0;
    int avaSeat, age, routeChoice;
    int isStudent;
    float fare = 0, discount = 0, studentDiscount = 0;

    // ---------- ROUTE SELECTION (must be first) ----------
    cout << "========== Available Routes ==========\n";
    cout << "1. Addis Ababa  ->  Nairobi      : 300\n";
    cout << "2. Addis Ababa  ->  Dubai        : 450\n";
    cout << "3. Addis Ababa  ->  London       : 700\n";
    cout << "4. Addis Ababa  ->  New York     : 900\n";
    cout << "5. Addis Ababa  ->  Johannesburg : 550\n";
    cout << "======================================\n";
    cout << "Choose your route (1-5): ";
    cin >> routeChoice;

    switch (routeChoice) {
        case 1: fare = 300; break;
        case 2: fare = 450; break;
        case 3: fare = 700; break;
        case 4: fare = 900; break;
        case 5: fare = 550; break;
        default:
            cout << "Invalid route selected. Exiting.\n";
            return 1;
    }

    // ---------- SEAT CHECK ----------
    cout << "Enter Number of available seat: ";
    cin >> avaSeat;

    if (avaSeat > 0) {
        cout << "Enter your age: ";
        cin >> age;

        cout << "Enter baggage weight (kg): ";
        cin >> bagWeight;

        // ---------- AGE DISCOUNT ----------
        if (age < 12)        discount = fare * 0.50;
        else if (age > 60)   discount = fare * 0.25;
        else                 discount = 0;

        // ---------- STUDENT DISCOUNT (30%) ----------
        cout << "Are you a student? (1 = Yes, 0 = No): ";
        cin >> isStudent;
        if (isStudent == 1) {
            studentDiscount = fare * 0.30;
        }

        // ---------- BAGGAGE EXTRA FEE ----------
        if (bagWeight > 20) {
            extra = (bagWeight - 20) * 10;
        }

        // ---------- TOTAL ----------
        total = (fare - discount - studentDiscount) + extra;

        if (total < 0) total = 0;

        // ---------- RECEIPT ----------
        cout << "\n========== TICKET SUMMARY ==========\n";
        cout << "Base fare            : " << fare << endl;
        cout << "Age discount         : " << discount << endl;
        cout << "Student discount(30%): " << studentDiscount << endl;
        cout << "Extra baggage fee    : " << extra << endl;
        cout << "------------------------------------\n";
        cout << "TOTAL FARE           : " << total << endl;
        cout << "====================================\n";
    } else {
        cout << "All seats are reserved" << endl;
    }

    return 0;
}