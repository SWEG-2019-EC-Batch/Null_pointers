/*
Different conditions need different actions: 
If condition A runs Action 1 and condition B runs Action 2, 
|| won't separate them—use if and else if
Order or priority matters: if / else if checks top-to-bottom and stops at the 
first match (like grading tiers: >= 90, 
then >= 80, then >= 70).
The expression gets too long or tangled: Chaining 4–5 && and || 
checks on one line becomes hard to read and debug. 
Breaking it into named bool variables often reads like plain English:
*/

#include <iostream>
#include <string>

using namespace std;

int main(){

    float baggage_in_kg;
    float baggage_fare = 0;
    float trip_fare = 0;
    float total_fare;
    int num_of_seat;
    int age;
    int route;
    char is_student;
    string destination;
    const int BAGGAGE_INCREMENT = 10;

    cout << "Enter the available seat: ";
    cin >> num_of_seat;

    if(num_of_seat > 0){

        // ---- Route selection ----
        cout << "\nChoose your route:" << endl;
        cout << "For Gondar press 1" << endl;
        cout << "For Bahir Dar press 2" << endl;
        cout << "For Lalibela press 3" << endl;
        cout << "For Hawassa press 4" << endl;
        cout << "For Dire Dawa press 5" << endl;
        cout << "Your choice: ";
        cin >> route;

        switch(route){
            case 1: destination = "Gondar";    trip_fare = 300; break;
            case 2: destination = "Bahir Dar"; trip_fare = 250; break;
            case 3: destination = "Lalibela";  trip_fare = 400; break;
            case 4: destination = "Hawassa";   trip_fare = 200; break;
            case 5: destination = "Dire Dawa"; trip_fare = 350; break;
            default:
                cout << "Invalid route!" << endl;
                return 1;
        }

        cout << "Enter your age: ";
        cin >> age;

        cout << "Are you a student? (y/n): ";
        cin >> is_student;

        cout << "Enter the weight of your baggage in kg: ";
        cin >> baggage_in_kg;

        total_fare = trip_fare;

        if(baggage_in_kg > 20){
            baggage_fare = (baggage_in_kg - 20) * BAGGAGE_INCREMENT;
            total_fare = trip_fare + baggage_fare;
        }

        bool student = (is_student == 'y' || is_student == 'Y');

        if(age < 12){
            total_fare = total_fare * 0.5;          
        }
        else if(age >= 60){
            total_fare = total_fare * 0.25;         
        }
        else if(student){
            total_fare = total_fare * 0.7;          
            cout << "student discount applied." << endl;
        }
        else{
            cout << "No discount applied." << endl;
        }

        cout << "\nDestination: " << destination << endl;
        cout << "Your total fare is: " << total_fare << " birr" << endl;

    }
    else{
        cout << "All seats are taken!" << endl;
    }

    return 0;
}
