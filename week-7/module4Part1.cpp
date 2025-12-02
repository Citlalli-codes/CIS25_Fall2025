#include <iostream>
#include <string>
using namespace std;


int main() {
    // declared integer variable
    int option; 
    
    // Displays Menu options
    cout << "* FOOD MENU * \n" << endl;

    cout << "1.Add Item\n2.View Item\n3.Exit\n\n";
    cout <<  "Choose an option: ";
    // Gets user input 
    cin >> option;
    
    // If statement for option 1
    if (option == 1) {
        cout << "Item added!";
    }
     // If statement for option 2
    else if (option == 2) {
         cout << "Displaying Item";
    }
     // If statement for option 3
    else if (option == 3) {
        cout << "Exiting..";
    }
     // if the user inputs other than 1, 2, or 3
    else {
         cout << "Invalid Input!";
    }

// exits the program
    return 0;

}