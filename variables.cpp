// Black_Scholes_Model.cpp : This file contains the 'main' function. Program execution begins and ends there.//


// Import statements
#include <iostream>    // Including the input/output stream library for standard input/output operations.
#include <cstdio>


void variables(); // Declaration of my variables function


int main() {
    variables();
    return 0; // Always required for the main function since it should return an integer value.
}

void variables() {
    int x = 5; // Intilization of an integer variable
    size_t size_of_x = sizeof(x); // Store the size of 'x' in 'size_of_x'. This is equal to 4 bytes

    float y = 5.5; //Initialization of a float variable
    size_t size_of_y = sizeof(y); // Stores the size of 'y' in 'size_of_y'. This is equal to 4 bytes

    double z = 5.50505050; // Initialization of a double variable
    size_t size_of_z = sizeof(z); // Stores the size of 'z' in 'size_of_z'. This is equal to 8 bytes


    char name[50] = "John Doe"; //Initialization of a string variable according to C. Important:  It can store up to 49 characters of data, leaving one character for the null-terminator ('\0')
    size_t size_of_char = sizeof(name); // Stores the size of 'x' in 'size_of_x'


    std::string namecpp = "John Doe"; // Initilization of a string variable accroding to C++. Strings in C++ are Objects and Memory Safe also allow support for built in methods

    printf("The size of 'x' (integer) is %zu bytes, and its value is %d\n", size_of_x, x);
    printf("The size of 'y' (float) is %zu bytes, and its value is %f\n", size_of_y, y);
    printf("The size of 'z' (double) is %zu bytes, and its value is %lf\n", size_of_z, z);
    printf("The size of 'name' (char array) is %zu bytes, and its value is %s\n", size_of_char, name);
}

