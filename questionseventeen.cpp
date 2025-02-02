/*17. Count Positive and Negative Numbers
Write a program to count how many positive and negative numbers are in an array of size 8.*/

#include <iostream>
using namespace std;

int main() {
    int numbers[8];  // Declare an array of size 8
    int positiveCount = 0, negativeCount = 0;  // Variables to store counts

    // Input 8 integers into the array
    cout << "Enter 8 integers:" << endl;
    for(int i = 0; i < 8; i++) {
        cin >> numbers[i];  // Store each input in the array
    }

    // Count positive and negative numbers
    for(int i = 0; i < 8; i++) {
        if(numbers[i] > 0) {
            positiveCount++;  // Increment if the number is positive
        } else if(numbers[i] < 0) {
            negativeCount++;  // Increment if the number is negative
        }
    }

    // Print the counts
    cout << "Positive numbers count: " << positiveCount << endl;
    cout << "Negative numbers count: " << negativeCount << endl;

    return 0;
}
