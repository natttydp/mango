/*13. Insert an Element
Write a program to insert an element at a specific index in an array of size 7. 
(Assume the user provides the index and value.)*/

#include <iostream>
using namespace std;

int main() {
    int numbers[8];  // Declare an array of size 8 (one extra space for insertion)
    int index, value;

    // Input 7 integers into the array
    cout << "Enter 7 integers:" << endl;
    for(int i = 0; i < 7; i++) {
        cin >> numbers[i];  // Store each input in the array
    }

    // Input the index and the value to insert
    cout << "Enter the index (0 to 6) to insert the element: ";
    cin >> index;
    cout << "Enter the value to insert: ";
    cin >> value;

    // Check if the index is valid
    if(index < 0 || index > 6) {
        cout << "Invalid index!" << endl;
    } else {
        // Shift elements to the right to create space for the new element
        for(int i = 7; i > index; i--) {
            numbers[i] = numbers[i - 1];
        }

        // Insert the new value at the specified index
        numbers[index] = value;

        // Print the updated array
        cout << "The updated array is:" << endl;
        for(int i = 0; i < 8; i++) {
            cout << numbers[i] << " ";
        }
        cout << endl;
    }

    return 0;
}