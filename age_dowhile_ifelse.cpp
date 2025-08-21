#include <iostream>
using namespace std;

int main(){

  int age;
   
  do{
     cout << "Enter your age: ";
     cin >> age;


     if (age == 17){
        cout << "Your age is correct" << endl;
     } else {
        cout << "Invalid Number" << endl;
     }

  } while (age != 17);
   
  



    return 0;
}