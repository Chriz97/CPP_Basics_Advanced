// pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.//

// Import statements
#include <iostream>    // Include the input/output stream library for standard input/output operations.
#include <cstdio>  // Include the cstdio library for C-style input/output operations.
#include <string>      // Include the string library for C++ string support.


void pointers();

void pointer_arrays();

int main() {
    pointers();
    pointer_arrays();
    return 0; // Return 0 to indicate successful execution
}



void pointers() {
    // Declare and initialize an integer variable
    int x = 10;

    // Determine the size of the variable 'x' in bytes
    int size_of_x = sizeof(x);
    std::cout << "Size of the variable x is: " << size_of_x << " bytes" << std::endl;

    // Create a pointer 'ptr' and point it to the memory location of 'x'
    int* ptr = &x;

    // Output the memory address in hexadecimal format
    std::cout << "Pointer in hexadecimal: " << std::hex << ptr << std::endl;

    // Output the memory address in decimal format
    std::cout << "Pointer in decimal: " << std::dec << (uintptr_t)ptr << std::endl;

    // Dereference the pointer to access the value of 'x' and store it in 'y'
    int y = *ptr;
    std::cout << "The dereferenced value of the pointer is: " << y << std::endl;

    // Change the value of 'x' through the pointer
    *ptr = 30;
    std::cout << "The new value of x is: " << x << std::endl;
}


void pointer_arrays() {
    // Initialize an array with 10 elements
    int arr[10] = { 10,20,30,40,50,60,70,80,90,100 };

    // Determine and print the size of the array
    int x = sizeof(arr);
    std::cout << "Size of the array: " << x << " bytes" << std::endl;

    // Pointer Initialization using 2 methods
    int* ptr;
    ptr = arr; // Point to the first element of the array
    int* ptr1 = &arr[0]; // Also points to the first element of the array

    // Check if both pointers point to the same memory location
    if (ptr == ptr1)
        std::cout << "Both pointers point to the same memory location. Dereferenced Values: " << *ptr << ", " << *ptr1 << std::endl;
    else
        std::cout << "Both pointers point to different memory locations. Dereferenced Values: " << *ptr << "," << *ptr1 << std::endl;

    // Pointer Arithmetic
    int* ptr2 = &arr[5]; // Point to the 6th element of the array
    int diff = ptr2 - ptr1; // Pointer subtraction gives the number of elements between ptr1 and ptr2
    std::cout << "Pointer arithmetic: " << diff << std::endl;

    // Define an offset for pointer manipulation
    int offset;
    offset = 2;
    int* z = ptr + offset;

    // Print the value pointed to by 'z'
    std::cout << "The value pointed to by z: " << *z << std::endl;

    // Pointer Dereferencing 
    int value = *ptr; // Dereference ptr to get the value it points to (the first element of the array)
    std::cout << "Dereferencing ptr: " << value << std::endl; // Should print "10"

    // Demonstration of memory offsets
    int offset1 = 1;
    int offset2 = 2;

    int* ofs1 = ptr + offset1; // Create a pointer 'ofs1' with an offset of 1
    int* ofs2 = ptr + offset2; // Create a pointer 'ofs2' with an offset of 2

    // Output the memory addresses of ptr, ofs1, and ofs2 in decimal format
    std::cout << "Pointer in decimal: " << std::dec << (uintptr_t)ptr << std::endl;
    std::cout << "Pointer in decimal (ofs1): " << std::dec << (uintptr_t)ofs1 << std::endl;
    std::cout << "Pointer in decimal (ofs2): " << std::dec << (uintptr_t)ofs2 << std::endl;
}
