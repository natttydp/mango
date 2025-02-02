/*10. Count Occurrences of a Number
Write a program to count how many times a given number appears in an array of size 8.*/

#include <iostream>
using namespace std;

int main() {
    int numbers[8];  // Declare an array of size 8
    int searchNum;   // Variable to store the number to search for
    int count = 0;    // Variable to store the count of occurrences

    // Input 8 integers from the user
    cout << "Enter 8 integers:" << endl;
    for(int i = 0; i < 8; i++) {
        cin >> numbers[i];  // Store each input in the array
    }

    // Input the number to search for
    cout << "Enter the number to search for: ";
    cin >> searchNum;

    // Count the occurrences of the given number
    for(int i = 0; i < 8; i++) {
        if(numbers[i] == searchNum) {
            count++;  // Increment count if the number matches
        }
    }

    // Print the count of occurrences
    cout << "The number " << searchNum << " appears " << count << " times in the array." << endl;

    return 0;
}