#include <iostream>
using namespace std;

int main(){

   double num1, num2, result;
   char op, choice;

   do {
    
    cout << "Enter the first number: ";
    cin >> num1; 

    cout << "Select operator: (+, -, *, /) ";
    cin >> op;

    cout << "Enter the second number: ";
    cin >> num2;

    switch(op){

      case '+':
      result = num1 + num2;
      break;

      case '-':
      result = num1 - num2;
      break;

      case '*':
      result = num1 * num2;
      break;

      case '/':
      if(num2 != 0)
      result = num1 / num2;
      else{
        cout << "Error: Division by zero\n";
        continue;

      }
      break;
      default:
      
      cout << "Invalid Operator! \n";
      continue; 
    }

    cout << "Result: " << result << endl;

    cout << "Do you want to calculate again? (y/n:) " ;
    cin >> choice;

   } while (choice == 'y' || choice == 'Y');

   cout << "Thanks for using my calculator" << endl;



    return 0;
}