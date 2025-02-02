/*3. Reverse Array
Write a program to input 5 integers and print them in reverse order.*/

#include <iostream>
using namespace std;

int main() {
    int numbers[5];  // Declare an array of size 5

    // Input 5 integers from the user
    cout << "Enter 5 integers:" << endl;
    for(int i = 0; i < 5; i++) {
        cin >> numbers[i];  // Store the input in the array
    }

    // Print the array elements in reverse order
    cout << "The array elements in reverse order are:" << endl;
    for(int i = 4; i >= 0; i--) {
        cout << numbers[i] << " ";
    }

    return 0;
}
