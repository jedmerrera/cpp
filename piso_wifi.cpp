#include <iostream>
using namespace std;

int main(){

 double amount; 
 string choice;
 int minutes = 0;

 do{
 cout << "==== Welcome to piso wifi ====" << endl;
 cout << "==== Maximum of 20 pesos amount only === \n";
 
 cout << "Insert: ";
 cin >> amount;

if(amount >= 20){
  cout << "20 = 3 hours" << endl;
  minutes += 180;
}
else if(amount >= 15){
  cout << "15 = 2 hours" << endl;
  minutes += 120;
}
else if(amount >= 10){
  cout << "10 = 1 hour" << endl;
  minutes += 60;
}
else if(amount >= 5){
  cout << "5 = 30 minutes" << endl;
  minutes += 30;
}
else{
  cout << "Invalid Amount, try again" << endl;
}

cout << "Do you want to extend your time? (yes/no): ";
cin >> choice;

}while(choice == "yes" || choice == "Yes" || choice == "YES");

 cout << "\n=== Your Session Ended ===" << endl;
 cout << "Total Time Purchased: " << minutes << "Minutes" << endl;
 cout << "Thank you for using our Piso Wifi. Comeback if you want :)" << endl;
  


  return 0;
}