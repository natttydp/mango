/*2. Input Array Elements
Write a program to input 10 integers from the user and store them in an array. 
Then, print the elements in the same order.*/

#include <iostream>
using namespace std;

int main() {
    int numbers[10]; // Declare an array of size 10

    // Input 10 integers from the user
    cout << "Enter 10 integers:" << endl;
    for(int i = 0; i < 10; i++) {
        cin >> numbers[i];  // Store the input in the array
    }

    // Print the array elements in the same order
    cout << "The array elements in the same order are:" << endl;
    for(int i = 0; i < 10; i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}