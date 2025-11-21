#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// created a class named Product
class Product {
    
  public:
  
    int id;
    string name;
    float price;
    
    //constructor initialize the values
     Product(int id, string name, float price){
         cout << "The constructor is called" << endl;
     }
     
     //destructor -displays the message
    ~Product() {
        cout << "The destructor  is called"<< endl;
    }
    
    // displays product information
    void printDetails () {
        cout << "Product Information:" << endl;
        cout << "ID:" << id << " Name:" << name << " Price:$" << price << endl;
    }
     
     
};

int main() {
    

    // created variables to get data by user input
    int id;
    string name;
    float price;
    
    
    cout << "Give details about the product" << endl;
   
    cout << "What is the id:";
    cin >>  id;
    
    cout << "What is the name:";
    cin >> name;
    
    cout << "What is the price:";
    cin >>  price;
    
    //created product object named item and to pass the parameters 
    Product item(id, name, price);
    
    
    //calls method printDetails to display product information
    item.printDetails();
    
    return 0;
}