/*16. Merge Two Arrays
Write a program to merge two arrays of size 3 into a single array of size 6. Print the merged array.*/

#include <iostream>
using namespace std;

int main() {
    int array1[3], array2[3], mergedArray[6];  // Declare two arrays of size 3 and one array of size 6

    // Input 3 integers for the first array
    cout << "Enter 3 integers for the first array:" << endl;
    for(int i = 0; i < 3; i++) {
        cin >> array1[i];  // Store each input in the first array
    }

    // Input 3 integers for the second array
    cout << "Enter 3 integers for the second array:" << endl;
    for(int i = 0; i < 3; i++) {
        cin >> array2[i];  // Store each input in the second array
    }

    // Merge the two arrays into the mergedArray
    for(int i = 0; i < 3; i++) {
        mergedArray[i] = array1[i];  // Copy elements of array1 into mergedArray
    }
    for(int i = 0; i < 3; i++) {
        mergedArray[3 + i] = array2[i];  // Copy elements of array2 into mergedArray starting from index 3
    }

    // Print the merged array
    cout << "The merged array is:" << endl;
    for(int i = 0; i < 6; i++) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    return 0;
}