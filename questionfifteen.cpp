/*15. Find Minimum Element
Write a program to find and print the smallest number in an array of size 6.*/

#include <iostream>
using namespace std;

int main() {
    int numbers[6];  // Declare an array of size 6
    int min;         // Variable to store the smallest number

    // Input 6 integers from the user
    cout << "Enter 6 integers:" << endl;
    for(int i = 0; i < 6; i++) {
        cin >> numbers[i];  // Store each input in the array
    }

    // Assume the first element is the smallest initially
    min = numbers[0];

    // Compare each element to find the smallest number
    for(int i = 1; i < 6; i++) {
        if(numbers[i] < min) {
            min = numbers[i];  // Update min if a smaller number is found
        }
    }

    // Print the smallest number
    cout << "The smallest number in the array is: " << min << endl;

    return 0;
}