//Andres Medina
//Data Structures Comp_Sci_303
//Professor Syed Jawad Hussain Shah
//06-29-2023

#include <iostream>
#include "Functions.h"

using namespace std;

int main() {
    // Creating an instance of the Single_Linked_List class with integer elements
    Single_Linked_List<int> list;

    int choice, value, index;

    while (true) {
        // Displaying the menu options
        cout << "Menu:\n";
        cout << "1. Push Front\n";
        cout << "2. Push Back\n";
        cout << "3. Pop Front\n";
        cout << "4. Pop Back\n";
        cout << "5. Insert\n";
        cout << "6. Remove\n";
        cout << "7. Find\n";
        cout << "8. Display\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        
        // Reading the user's choice from the console
        cin >> choice;

        switch (choice) {
            case 1:
                // Pushing a value to the front of the list
                cout << "Enter the value: ";
                cin >> value;
                list.push_front(value);
                cout << "Item pushed to the front.\n";
                break;
            case 2:
                // Pushing a value to the back of the list
                cout << "Enter the value: ";
                cin >> value;
                list.push_back(value);
                cout << "Item pushed to the back.\n";
                break;
            case 3:
                // Popping a value from the front of the list
                list.pop_front();
                cout << "Item popped from the front.\n";
                break;
            case 4:
                // Popping a value from the back of the list
                list.pop_back();
                cout << "Item popped from the back.\n";
                break;
            case 5:
                // Inserting a value at a specified index in the list
                cout << "Enter the index: ";
                cin >> index;
                cout << "Enter the value: ";
                cin >> value;
                list.insert(index, value);
                cout << "Item inserted.\n";
                break;
            case 6:
                // Removing a value at a specified index from the list
                cout << "Enter the index: ";
                cin >> index;
                if (list.remove(index)) {
                    cout << "Item removed.\n";
                } else {
                    cout << "Invalid index. Item removal failed.\n";
                }
                break;
            case 7:
                // Finding the index of a specified value in the list
                cout << "Enter the value: ";
                cin >> value;
                index = list.find(value);
                if (index < list.size()) {
                    cout << "Item found at index: " << index << "\n";
                } else {
                    cout << "Item not found.\n";
                }
                break;
            case 8:
                // Displaying the contents of the list
                cout << "List: ";
                list.display();
                break;
            case 9:
                // Exiting the program
                cout << "Exiting the program.\n";
                return 0;
            default:
                // Handling invalid user choices
                cout << "Invalid choice. Please try again.\n";
        }
    }
    return 0;
}
