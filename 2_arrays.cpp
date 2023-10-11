// 2_arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.//

// Import statements
#include <iostream>    // Include the input/output stream library for standard input/output operations.
#include <cstdio>  // Include the cstdio library for C-style input/output operations.
#include <string>      // Include the string library for C++ string support.
#include <algorithm> // For std::sort

void arrays();

int main() {

    arrays();
    return 0; // Return 0 to indicate successful execution
}

void arrays() {
    int array0[10];
    // Attempting to change the size of the array will result in a compilation error
    // arr.resize(5); // This is not allowed for built-in arrays
    array0[0] = 50;
    std::cout << "The first elmenet of arry0 is " << array0[0] << std::endl;


    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int size_of_arr = sizeof(arr);
    std::cout << size_of_arr << std::endl;

    // Print array elements in order
    for (int i = 0; i < 10; i++) {
        std::cout << arr[i] << std::endl;
    }

    // Print array elements in reverse order
    for (int i = 9; i >= 0; i--) {
        std::cout << arr[i] << std::endl;
    }

    // Sort the array
    int size_array = 10;
    std::sort(arr, arr + size_array);

    // Find the maximum value
    int max_val = arr[9];
    std::cout << "Maximum Value: " << max_val << std::endl;

    // Find the minimum value
    int min_val = arr[0];
    std::cout << "Minimum Value: " << min_val << std::endl;

    // Multidimensional Array (2D)
    int matrix[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };

    // Accessing elements in a 2D array
    int element = matrix[1][0]; // Accesses the element in the second row, third column (6)
    std::cout << element << std::endl;

    // Accessing and printing the entire second row
    int matrix2[3][3] = { {61, 26, 36}, {40, 50, 60}, {87, 78, 19} };
    for (int i = 0; i < 3; i++) {
        std::cout << matrix2[1][i] << " ";
    }
    std::cout << std::endl;

    // Print the memory addresses in decimal values
    for (int i = 0; i < 3; i++) {
        std::cout << "Row " << i << ": ";
        for (int j = 0; j < 3; j++) {
            long long int address = (uintptr_t)(&matrix2[i][j]);
            std::cout << address << " "; // Print the memory address in decimal
        }
        std::cout << std::endl;
    }
}
