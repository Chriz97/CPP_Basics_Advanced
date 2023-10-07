// variables.cpp : This file contains the 'main' function. Program execution begins and ends there.//

// Import statements
#include <iostream>    // Include the input/output stream library for standard input/output operations.
#include <cstdio>  // Include the cstdio library for C-style input/output operations.
#include <string>      // Include the string library for C++ string support.

void variables(); // Declaration of my variables function

int main() {
    variables(); // Function call
    return 0; // Return 0 to indicate successful execution
}

void variables() {
    int x = 5; // Initialization of an integer variable
    size_t size_of_x = sizeof(x); // Stores the size of 'x' in 'size_of_x'. This is equal to 4 bytes.

    short int sx = 4; // Initialization of a short integer.
    size_t size_of_sx = sizeof(sx); //  Stores the size of 'sx' in 'size_of_sx'. This is equal to 2 bytes.

    long int lx = 85; // Initialization of a long integer.
    size_t size_of_lx = sizeof(lx);  //  Stores the size of 'lx' in 'size_of_lx'. This is equal to 4 bytes.

    long long int llx = 90; // Initialization of a long long integer.
    size_t size_of_llx = sizeof(llx);  //  Stores the size of 'llx' in 'size_of_llx'. This is equal to 8 bytes.

    unsigned int us = 89; //Initialization of an unsigned integer, which can only store positive values..
    // A negative integer will not lead to a compile error sinceC and C++ have specific rules for handling signed integer values when they are assigned to unsigned integer variables.
    size_t size_of_us = sizeof(us);  //  Stores the size of 'us' in 'size_of_us'. This is equal to 4 bytes.

    signed int si = 388; //Initialization of a signed integer, which can store positive ánd negative values.
    size_t size_of_si = sizeof(si); //  Stores the size of 'si' in 'size_of_si'. This is equal to 4 bytes.

    float y = 5.5; //Initialization of a float variable.
    size_t size_of_y = sizeof(y); // Stores the size of 'y' in 'size_of_y'. This is equal to 4 bytes.

    double z = 5.50505050; // Initialization of a double variable.
    size_t size_of_z = sizeof(z); // Stores the size of 'z' in 'size_of_z'. This is equal to 8 bytes.

    char name[50] = "John Doe"; //Initialization of a string variable according to C. Important:  It can store up to 49 characters of data, leaving one character for the null-terminator ('\0').
    size_t size_of_char = sizeof(name); // Stores the size of 'name' in 'size_of_char'. This equal to 50 bytes because the variable is initialized with 50 bytes.

    std::string namecpp = "John Doe"; // Initilization of a string variable accroding to C++. Strings in C++ are Objects and Memory Safe also allow support for built in methods.

    printf("The size of 'x' (integer) is %zu bytes, and its value is %d\n", size_of_x, x);
    printf("The size of 'sx' (short integer) is %zu bytes, and its value is %d\n", size_of_sx, sx);
    printf("The size of 'lx' (long integer) is %zu bytes, and its value is %d\n", size_of_lx, lx);
    printf("The size of 'llx' (long long integer) is %zu bytes, and its value is %lld\n", size_of_llx, llx);
    printf("The size of 'us' (unsigned integer) is %zu bytes, and its value is %d\n", size_of_us, us);
    printf("The size of 'si' (signed integer) is %zu bytes, and its value is %d\n", size_of_si, si);
    printf("The size of 'z' (double) is %zu bytes, and its value is %lf\n", size_of_z, z);
    printf("The size of 'name' (char array) is %zu bytes, and its value is %s\n", size_of_char, name);
}
