/*5. Largest Element in an Array
Write a program to find and print the largest number in an array of size 6.*/

#include <iostream>
using namespace std;

int main() {
    int numbers[6];  // Declare an array of size 6
    int largest;     // Variable to store the largest number

    // Input 6 integers from the user
    cout << "Enter 6 integers:" << endl;
    for(int i = 0; i < 6; i++) {
        cin >> numbers[i];  // Store the input in the array
    }

    // Assume the first element is the largest initially
    largest = numbers[0];

    // Compare each element with the largest and update if necessary
    for(int i = 1; i < 6; i++) {
        if(numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    // Print the largest element
    cout << "The largest element in the array is: " << largest << endl;

    return 0;
}
