#include <iostream>
#include <string>
using namespace std;


int main() {
  // declared 3 variables 
   float num1,num2, num3;
  
  //Displays to enter 3 numbers
   cout << "Enter three numbers: ";

  //Get User input
   cin >> num1 >> num2 >> num3;

  // Compares three numbers by each condition to see which is the largest number
  // Once it finds the largest number it will display  

  //If num1 is greater than num2 and num3
   if (num1 >= num2 && num1 >= num3) {
    cout << "Largest number: " << num1;
   }
   //If num2 is greater than num1 and num3
   else if (num2 >= num1 && num2 >= num3) {
    cout << "Largest number: " << num2;
   }
  //If num3 is greater than num1 and num2
   else if (num3 >= num1 && num3 >= num2) {
    cout << "Largest number: " << num3;
   }
// ends the program
return 0;

}
