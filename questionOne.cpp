/*1. Declare and Initialize an Array
Write a program to declare an integer array of size 5 and initialize it with values 1, 2, 3, 4, 5. 
Print the array elements.*/

#include <iostream>
using namespace std;

int main() {
    // Declare and Initialize an array of size 5
    int numbers[5] = {1, 2, 3, 4, 5};
    
    // Print the array elements
    for(int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}