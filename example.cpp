#include <iostream>
using namespace std;

// Define the maximum size of the array
const int maxsize = 10;
// Declare an integer array of maxsize and a variable to store the current number of elements
int list[maxsize], n;

// Function to create an array with 'n' elements
void create() {
    int i;
    // Get the number of elements from the user
    cout << endl << "Enter the number of elements to be added in the list: ";
    cin >> n;
    // Get the array elements from the user
    cout << endl << "Enter the array elements: ";
    for(i = 0; i < n; i++)
        cin >> list[i];
}

// Function to insert an element at a specified position
void insert() {
    int i, data, pos;
    // Get the data to be inserted and the position from the user
    cout << endl << "Enter the data to be inserted: ";
    cin >> data;
    cout << "Enter the position at which element to be inserted: ";
    cin >> pos;
    // Check if the array is full
    if (maxsize <= n) {
        cout << "Array overflow";
        return;
    }
    // Shift elements to the right, starting from the last element to the position
    for(i = n - 1; i >= pos - 1; i--)
        list[i + 1] = list[i];
    // Insert the data at the specified position
    list[pos - 1] = data;
    // Increment the number of elements
    n = n + 1;
}

// Function to delete an element at a specified position
void delete_element() {
    int i, pos;
    // Get the position of the data to be deleted from the user
    cout << "Enter the position of the data to be deleted: ";
    cin >> pos;
    // Print the deleted data
    cout << endl << "The data deleted is: " << list[pos - 1];
    // Shift elements to the left, starting from the position
    for(i = pos - 1; i < n - 1; i++)
        list[i] = list[i + 1];
    // Decrement the number of elements
    n = n - 1;
}

// Function to display the elements in the array
void display() {
    int i;
    cout << endl << "Elements in the array: ";
    for(i = 0; i < n; i++)
        cout << list[i] << " ";
    cout << endl;
}

// Function to search for an element in the array
void search() {
    int search, i, count = 0;
    // Get the element to be searched from the user
    cout << "Enter the element to be searched: ";
    cin >> search;
    // Check if the element is present in the array
    for(i = 0; i < n; i++) {
        if(search == list[i])
            count++;
    }
    // Print the result
    if(count == 0)
        cout << endl << "Element not present in the list";
    else
        cout << endl << "Element present in the list";
}

        // Get the user's choice
        cout << "Enter your choice: ";
        cin >> choice;
        // Perform the operation based on the user's choice
        switch(choice) {
            case 1:
                // Create the array with user-defined elements
                create();
                break;
            case 2:
                // Insert an element at a specified position
                insert();
                break;
            case 3:
                // Delete an element at a specified position
                delete_element();
                break;
            case 4:
                // Display the elements in the array
                display();
                break;
            case 5:
                // Search for an element in the array
                search();
                break;
            case 6:
                // Exit the program
                exit(0);
                break;
            default:
                // Handle invalid choices
                cout << "Invalid choice. Please enter a valid option.";
        }
    } while (choice != 6); // Continue running the menu until the user chooses to exit (choice == 6)
    return 0;
}
