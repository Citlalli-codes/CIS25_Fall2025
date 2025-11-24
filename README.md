# CIS25_Fall2025


## Week 5:

**Module 1:**

* How to output text and size using escape characters

#### What the code does:
- prints the message 'Hello Inventory System'and 'Data Types'
- Use escape characters such as '\t', '\n' to format the output 
- Uses 'sizeof() to display the memory size in bytes of the as int, float and char data types 

**Module 6:**
* How to use file I/O to save and retrieve item data
  
#### What the code does:
- creates instance/object of the Item class named material
- asks the user to enter the items material name and quantity
- Calls 'material.saveToFile()' using 'ofstream' to save the item data to the item.text file
- Calls 'material.loadFromFile()' using 'ifstream' to read the data to the file and display information
  
**Module 11:**
* How to use class constructors and destructors
#### What the code does:
- The program asks the user input for product id, name and price
- Creates a product object named item 'Product item(id, name, price)' to pass the parameters to 'Product(int id, string name, float price)'
- The constructor runs immediately and displays message
- calls 'item.printDetails()' to display the product information
- The destructor runs immediately and displays message

notes: 
- when passing parameters 'Product(int id, string name, float price)'
-  initializer list ': id(id), name(name), price(price)' to assigns the parameters to class variables

## Week 6:
**Module 7:**
* How to use struct, pointers, dynamic memory allocations and binary search
#### What the code does:
- A struct named Item is defined which stores two pieces of information for each item string name and int id 
- Uses new[] to dynamically allocate memory of the array of 100 items 
- Inside the for loop it asks the user to input item name and id which the data is stored in the inventory array
- The for loop ends until it populate the array at least 100 items
- The sort function sorts the array alphabetically by name of each item
- Asks the user for an ID to search for
- The binary search function finds the search item ID 
- Once it finds its match of the id it will display the item name and ID
- The program free the dynamically allocated memory using delete[] 
