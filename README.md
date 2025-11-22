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
