/*7. Average of Array Elements
Write a program to calculate and print the average of the elements in an array of size 7.*/

#include <iostream>
using namespace std;

int main() {
    int numbers[7];  // Declare an array of size 7
    int sum = 0;     // Variable to stores the sum of the elements

    // Input 7 integers from the user
    cout << "Enter 7 integers:" << endl;
    for(int i = 0; i < 7; i++) {
        cin >> numbers[i];  // Store the input in the array
    }

    // Calculate the sum of the array elements
    for(int i = 0; i < 7; i++) {
        sum += numbers[i];  // Add each element to the sum
    }

    // Calculate the average
    double average = sum / 7.0;  // Use 7.0 to ensure division returns a float result

    // Print the average
    cout << "The average of the array elements is: " << average << endl;

    return 0;
}
