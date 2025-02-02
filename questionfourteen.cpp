/*14. Delete an Element*
Write a program to delete an element from a specific index in an array of size 7. 
(Assume the user provides the index.)*/

#include <iostream>
using namespace std;

int main() {
    int numbers[7];  // Declare an array of size 7
    int index;

    // Input 7 integers into the array
    cout << "Enter 7 integers:" << endl;
    for(int i = 0; i < 7; i++) {
        cin >> numbers[i];  // Store each input in the array
    }

    // Input the index of the element to delete
    cout << "Enter the index (0 to 6) of the element to delete: ";
    cin >> index;

    // Check if the index is valid
    if(index < 0 || index > 6) {
        cout << "Invalid index!" << endl;
    } else {
        // Shift elements to the left to remove the element at the given index
        for(int i = index; i < 6; i++) {
            numbers[i] = numbers[i + 1];  // Shift each element one position left
        }

        // Print the updated array
        cout << "The updated array after deletion is:" << endl;
        for(int i = 0; i < 6; i++) {
            cout << numbers[i] << " ";
        }
        cout << endl;
    }

    return 0;
}