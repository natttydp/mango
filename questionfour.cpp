/*4. Sum of Array Elements
Write a program to calculate and print the sum of all elements in an array of size 8.*/

#include <iostream>
using namespace std;

int main() {
    int numbers[8];  // Declare an array of size 8
    int sum = 0;     // Variable to store the sum of the elements

    // Input 8 integers from the user
    cout << "Enter 8 integers:" << endl;
    for(int i = 0; i < 8; i++) {
        cin >> numbers[i];  // Store the input in the array
    }

    // Calculate the sum of the array elements
    for(int i = 0; i < 8; i++) {
        sum += numbers[i];  // Add each element to sum
    }

    // Print the sum
    cout << "The sum of the array elements is: " << sum << endl;

    return 0;
}