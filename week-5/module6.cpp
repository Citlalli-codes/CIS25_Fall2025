#include <iostream>
#include <fstream>
#include <string>
using namespace std;


//defined a class named Item
class Item {
    
    public:
    
    string name;
    int quantity;
        
        void saveToFile() {
            //opens the file to write the data in the file
            ofstream out("items.txt");
            
           
            if (out.is_open()) {
                out << name << "," << quantity << endl;
                
                // closes the file
                out.close();
            }
            else {
                cout << "unable to open file for writing" << endl;
            }
        }
        
        
        
        void loadFromFile() {
             
             //opens the file to read the data
            ifstream in("items.txt");
             if (in.is_open()) {
                string line;
            while (getline(in, line)) {
                cout << "File content: " << line << endl;
            }
               
                
                // closes the file
                in.close();
            }
            else {
                cout << "unable to open file for reading" << endl;
            }
            
        }
    };

int main() {
    
     //creates instance of item called material
    Item material;
    
     //assigns values to item name & quantity 
    material.name;
    material.quantity;
    
    //Get user input material and quantity 
    cout << "What kind of material: ";
    cin >> material.name;
    
    cout << "Enter the quanitity: ";
    cin >> material.quantity;
    
     // calls the method saveToFile()
    material.saveToFile();
    
     // calls the method loadFromFile() 
    material.loadFromFile();
    
 return 0;   
}