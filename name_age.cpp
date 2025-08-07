#include <iostream>
using namespace std;

int main() {
    int age;
    string fullName;

    cout << "Enter your full name: ";
    getline(cin, fullName); 
    
    cout << "Enter your age: ";
    cin >> age;

    cout << "Hello " << fullName << "!, you are " << age << " years old." << endl;

    return 0;
}
