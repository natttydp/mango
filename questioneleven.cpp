/*11. Copy an Array
Write a program to copy all elements of one array into another array. 
Both arrays should have 5 elements.*/

#include <iostream>
using namespace std;

int main() {
    int source[5];  // Declare the source array of size 5
    int destination[5];  // Declare the destination array of size 5

    // Input 5 integers into the source array
    cout << "Enter 5 integers for the source array:" << endl;
    for(int i = 0; i < 5; i++) {
        cin >> source[i];  // Store each input in the source array
    }

    // Copy elements from source array to destination array
    for(int i = 0; i < 5; i++) {
        destination[i] = source[i];  // Copy each element
    }

    // Print the destination array to verify the copy
    cout << "The elements of the destination array are:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << destination[i] << " ";
    }
    cout << endl;

    return 0;
}
