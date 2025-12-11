#include <iostream>
#include <fstream>
#include <string>
using namespace std;


//Created a BankAccount class
class BankAccount {
    private:
    double totalBalance;
    
    
    public:

//Created a BankAccount object
    BankAccount() {
        totalBalance = 753414;
    }
   
    //Prints final balance
    void finalBalance() {
        cout << "\nFinal Balance:$"<< totalBalance;
    }
    
    //method to make a purchase (deducts from balance)
    void payment(string item, double price) {
        totalBalance -= price;
        cout << item << "        - $"  << price << "\n";
         //writes each purchase to transaction.txt
        saveTransaction("Purchase -" + item, price);
    }

    // method deposit funds (adds balance)
    void deposit(double amount) {
        totalBalance += amount;
       
        cout << "Transaction History:\n";
        cout << "--------------------\n";
        cout <<"Deposit        + $"  << amount << "\n";

        //writes each deposit to transaction.txt
        saveTransaction("Deposit", amount);
        
    }

    //displays the current balance you have now
    void currentBalance() {
        cout << "Current Balance:$"<< totalBalance << "\n\n";
    }
    
    // method to save each transaction to a file
     void saveTransaction (string item, double amount) {
        ofstream file ("transactions.txt", ios::app);
            if (file.is_open()){
                file << item << ":$" << amount << endl;
                file.close();
            }
        
    }
    
};


int main() {

    //Created variable called userAccount
    BankAccount userAccount;
    
    //prints the name of the user account
     cout << "User's account \n" << endl;

     //calls currentBalance function
     userAccount.currentBalance();

     //calls deposit function
     userAccount.deposit(800.00);

     //calls payment function
     userAccount.payment("flix",7.99);
     userAccount.payment("Dropbox", 12.50);
     userAccount.payment("Shopify", 12.50);
     userAccount.payment("Uber", 4.56);

     //calls finalBalance function
     userAccount.finalBalance();
     

    return 0;
}