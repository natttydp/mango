/*6. Count Even Numbers
Write a program to count how many even numbers are present in an array of size 10.*/

#include <iostream>
using namespace std;

int main() {
    int numbers[10];  // Declare an array of size 10
    int evenCount = 0; // Variable to store the count of even numbers

    // Input 10 integers from the user
    cout << "Enter 10 integers:" << endl;
    for(int i = 0; i < 10; i++) {
        cin >> numbers[i];  // Store the input in the array
    }

    // Count the even numbers
    for(int i = 0; i < 10; i++) {
        if(numbers[i] % 2 == 0) { // Check if the number is even
            evenCount++;
        }
    }

    // Print the count of even numbers
    cout << "The number of even numbers in the array is: " << evenCount << endl;

    return 0;
}