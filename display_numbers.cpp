#include <iostream>
#include <cstdlib>
using namespace std;

int main(){ 

int numbers[10];

cout << "Enter the numbers you want: " << endl;

for(int i = 0; i < 10; i++ ){
  cin >> numbers[i];
}

cout << "You've entered: " << endl;

for(int i = 0; i < 10; i++){
  cout << numbers[i] << endl;
}



return 0;

}
