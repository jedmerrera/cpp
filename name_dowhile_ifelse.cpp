#include <iostream>
#include <string>
using namespace std;

int main(){

    string Name;

    do {
    cout << "Enter your name: ";
    cin >> Name;

   
    if (Name == "Jed"){
        cout << "Accept" << endl;
    } else {
        cout << "Access Denied" << endl;
    }

    
    } while (Name != "Jed");
    

    return 0;
}