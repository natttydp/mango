/*8. Find an Element
Write a program to input an array of size 5 and a number to search for. 
Print whether the number is found in the array or not.*/

#include <iostream>
using namespace std;

int main() {
    int numbers[5];  // Declare an array of size 5
    int searchNum;   // Variable to store the number to search for
    bool found = false; // Flag to indicate whether the number was found

    // Input 5 integers into the array
    cout << "Enter 5 integers:" << endl;
    for(int i = 0; i < 5; i++) {
        cin >> numbers[i];  // Store each input in the array
    }

    // Input the number to search for
    cout << "Enter the number to search for: ";
    cin >> searchNum;

    // Search for the number in the array
    for(int i = 0; i < 5; i++) {
        if(numbers[i] == searchNum) {
            found = true;  // Number found
            break;         // Exit the loop since we found the number
        }
    }

    // Print whether the number was found or not
    if(found) {
        cout << "The number " << searchNum << " was found in the array." << endl;
    } else {
        cout << "The number " << searchNum << " was not found in the array." << endl;
    }

    return 0;
}