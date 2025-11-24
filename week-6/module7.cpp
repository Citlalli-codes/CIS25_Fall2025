#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


// A struct called Item to store 
struct Item {
    string name;
    int id;
};


// Binary search function
int binarySearch(Item inventory[], int size, int itemTarget) {
    
    //Binary search to find the target item
    int left = 0;
    int right = size - 1;
    
    while (left <= right) {
        int middle = left + (right - left) / 2;
        
        if (inventory[middle].id == itemTarget) {
            return middle;
        }
        else  if (inventory[middle].id > itemTarget) {
            right = middle - 1;
        }
        else {
            left = middle + 1;
        }
        
    }
    return -1;
}


        


int main() {
    
    int searchID;
    const int  NUM_ITEMS = 100;
    
   // dynamically allocate memory for the array (gives memeory to store the items )
    Item* inventory = new Item[NUM_ITEMS];
    
    // populate the array with sorted data of id, name (sorted by name), min 100
    for (int i = 0; i< 2; i++) {
        cout << "Enter Name" << ":"; 
        cin >> inventory[i].name;
        cout << "Enter ID" << ":"; 
        cin >> inventory[i].id;
    }
    
    
    
    // sort array by name
    sort(inventory, inventory + NUM_ITEMS,[] (const Item&a, const Item&b ){
         return a.name < b.name;
    });
    
    //Input search ID number
    cout << "ID to search for:";
    cin >> searchID;
   
   // Calls the binary search function
   int result = binarySearch(inventory, NUM_ITEMS, searchID);
   
   
   // Displays the searched Item
   if (result != -1 ) {
        cout << "Item " << "- " << "Name:" << inventory[result].name << " Id:" << inventory[result].id << endl;
   }
   else {
       cout << "ID not found";
   }

    // deletes the allocated memory of the array
    delete[] inventory;
return 0;
   
    
}