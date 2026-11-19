 
#include <iostream>
using namespace std;

int main() {
    float baggage_weight;
    int trip_fare, baggage_fare;
    int seat_available, age;
    float total_fare,discount ;
    trip_fare = 300;
    baggage_fare = 10;
    
    cout<<"How many seat is there? ";
    cin>>seat_available; 
    
    
        
    
    if(seat_available>0){
    
    cout<<"enter baggage in kg : " ;
    cin>>baggage_weight;
    
     
    
      if(baggage_weight > 20) {
      total_fare = trip_fare  + (baggage_weight - 20)* (baggage_fare);
      cout<<"your need to pay: " <<total_fare<<endl;
      }
      else{
      total_fare = trip_fare;
       cout<<"your need to pay: " <<total_fare<<endl;
       }
      
      cout<<"how old are u?: "<<endl;
      cin>>age;
    
    if(age<=12){
     discount = total_fare*0.5;
     cout<<"pay: " <<discount<<endl;
    }
     else if(age>=60) {
     discount = total_fare * 0.25;
     cout<<"pay: "<<discount<<endl;    
       }
    else {
     cout<<"No seat is available.";  
     }
     }
 return 0;
       }