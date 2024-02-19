#include <iostream>

int main() {
    int a = 10;                     // declare variable
    int* p = &a;                    // declare pointer and store value of a

    std::cout << "Address stored in p: " << p << std::endl;  // print address stored in p
    std::cout << "Value of a using p: " << *p << std::endl;  // print value of a using p

    *p = 20;                        // change the value of a using p
    std::cout << "New value of a: " << a << std::endl;       // print new value of a

    int arr[5];                     // declare array

    for (int i = 0; i < 5; i++)     // populate array with values of each element
    {
        std::cout << "Address of element " << i << ": " << &arr[i] << std::endl; // print address of each element
    }

    int *ptr = arr;                 // declare a pointer and point to first element of array
    for (int i = 0; i < 5; i++)     // print value of each element using pointer
    {
       std::cout << "Value of element " << i << ": " << *ptr << std::endl;  // print value of each element
        ptr++;                      // move pointer to next element
    }

    return 0;
}
