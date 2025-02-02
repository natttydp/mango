/*18. Sum of Odd-Indexed Elements
Write a program to calculate and print the sum of elements at odd indices in an array of size 10.*/

#include <iostream>
using namespace std;

int main() {
    int numbers[10];  // Declare an array of size 10
    int sum = 0;      // Variable to store the sum of elements at odd indices

    // Input 10 integers from the user
    cout << "Enter 10 integers:" << endl;
    for(int i = 0; i < 10; i++) {
        cin >> numbers[i];  // Store each input in the array
    }

    // Calculate the sum of elements at odd indices (1, 3, 5, 7, 9)
    for(int i = 1; i < 10; i += 2) {
        sum += numbers[i];  // Add the element at the odd index to the sum
    }

    // Print the sum
    cout << "The sum of elements at odd indices is: " << sum << endl;

    return 0;
}
   
