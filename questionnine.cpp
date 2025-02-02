/*9. Replace Negative Numbers
Write a program to replace all negative numbers in an array with 0. 
The array should have 6 elements.*/

#include <iostream>
using namespace std;

int main() {
    int numbers[6];  // Declare an array of size 6

    // Input 6 integers from the user
    cout << "Enter 6 integers:" << endl;
    for(int i = 0; i < 6; i++) {
        cin >> numbers[i];  // Store the input in the array
    }

    // Replace all negative numbers with 0
    for(int i = 0; i < 6; i++) {
        if(numbers[i] < 0) {
            numbers[i] = 0;  // Replace negative number with 0
        }
    }

    // Print the updated array
    cout << "The updated array is:" << endl;
    for(int i = 0; i < 6; i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}
