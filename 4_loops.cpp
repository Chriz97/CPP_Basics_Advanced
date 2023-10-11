// 2_arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.//

// Import statements
#include <iostream>    // Include the input/output stream library for standard input/output operations.
#include <cstdio>  // Include the cstdio library for C-style input/output operations.
#include <string>      // Include the string library for C++ string support.
#include <algorithm> // For std::sort
#include <chrono>
#include <iomanip> // For setting precision

int multiply_function(int a, int b);

void for_loop_limit(int limit);

int int_for_loop_limit(int limit1);

int int_while_loop_limit(int limit2);

int main() {
    
    int x = multiply_function(4,5);
    std::cout << x << std::endl;
    for_loop_limit(100);
    int return_value = int_for_loop_limit(100000);
    std::cout << return_value << std::endl;
    int result_while_loop = int_while_loop_limit(100000);
    std::cout << result_while_loop << std::endl;
    return 0; // Return 0 to indicate successful execution
}


int multiply_function(int a, int b) {
    return a * b;
}

void for_loop_limit(int limit) {
    for (int i = 0; i <= limit; i++) {
        std::cout << i << "\n";
    }
}

int int_for_loop_limit(int limit1) {
    int lastValue = 0;  // Initialize a variable to store the last value

    // Start the timer
    auto start = std::chrono::high_resolution_clock::now();

    for (int i = 0; i <= limit1; i++) {
        lastValue = i;  // Update the lastValue inside the loop
    }

    // Stop the timer
    auto stop = std::chrono::high_resolution_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::duration<double>>(stop - start);

    // Set the precision to 10 digits
    std::cout << std::fixed << std::setprecision(10);

    std::cout << "Time taken by for loop: " << duration.count() << " seconds" << std::endl;

    return lastValue;  // Return the last value after the loop
}

int int_while_loop_limit(int limit2) {
    int lastValue = 0;  // Initialize a variable to store the last value

    // Start the timer
    auto start = std::chrono::high_resolution_clock::now();

    int i = 0;
    while (i <= limit2) {
        lastValue = i;  // Update the lastValue inside the loop
        i++;
    }

    // Stop the timer
    auto stop = std::chrono::high_resolution_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::duration<double>>(stop - start);

    // Set the precision to 10 digits
    std::cout << std::fixed << std::setprecision(10);

    std::cout << "Time taken by while loop: " << duration.count() << " seconds" << std::endl;

    return lastValue;  // Return the last value after the loop
}
