/*12. Sort an Array (Ascending)
Write a program to sort an array of 6 integers in ascending order.*/

#include <iostream>
using namespace std;

int main() {
    int numbers[6];  // Declare an array of size 6

    // Input 6 integers from the user
    cout << "Enter 6 integers:" << endl;
    for(int i = 0; i < 6; i++) {
        cin >> numbers[i];  // Store each input in the array
    }

    // Sorting the array in ascending order using Bubble Sort
    for(int i = 0; i < 6 - 1; i++) {
        for(int j = 0; j < 6 - 1 - i; j++) {
            if(numbers[j] > numbers[j + 1]) {
                // Swap the elements if they are in the wrong order
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    cout << "The sorted array in ascending order is:" << endl;
    for(int i = 0; i < 6; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}